function Initialize()
    WidthMeasure = SKIN:GetMeasure('MeasureWidth')
    HeightMeasure = SKIN:GetMeasure('MeasureHeight')
end

function Update()
    local date = os.date('!*t')
    local width = WidthMeasure:GetValue()
    local height = HeightMeasure:GetValue()

    local isNorthernSun = IsNorthernSun(date)
    local path = GetTerminatorPath(width, height, date, isNorthernSun)
    local pathString = PathToString(path)

    SKIN:Bang('!SetOption', 'MeterNight', 'TerminatorPath', pathString)
    SKIN:Bang('!UpdateMeter', 'MeterNight')

    SKIN:Bang('!SetOption', 'MeterDayMapContainer', 'TerminatorPath', pathString)
    SKIN:Bang('!UpdateMeter', 'MeterDayMapContainer')

    SKIN:Bang('!Redraw')
end

-- Конвертация линии терминатора в полигон
function PathToString(path)
    local pathString = {}

    table.insert(pathString, path[1][1] .. ',' .. path[1][2])

    for i = 1, #path do
        table.insert(pathString, 'LineTo ' .. path[i][1] .. ',' .. path[i][2])
    end

    table.insert(pathString, 'ClosePath 1')

    return table.concat(pathString, " | ")
end

-- Расчёт линии терминатора
function GetTerminatorPath(width, height, date, isNorthernSun)
    local path = {}

    for x = 0, width do
        local terminator = Terminator(width, height, date, x)
        table.insert(path, { x, math.floor(terminator) })
    end

    if isNorthernSun then
        table.insert(path, 1, { 0, height })
        table.insert(path, { width, height })
    else
        table.insert(path, 1, { 0, 0 })
        table.insert(path, { width, 0 })
    end

    return path
end

-- Вычисление стороны освещения
function IsNorthernSun(date)
    local vernalEq = os.time { year = date.year, month = 3, day = 19 }
    local autumnalEq = os.time { year = date.year, month = 9, day = 18 }

    local timestamp = os.time(date)

    return timestamp > vernalEq and timestamp <= autumnalEq
end

-- Получение номера дня года
function GetDayOfYear(date)
    local timestamp = os.time(date)
    local secondsInDay = 86400
    local dayOfYear = math.floor(timestamp / secondsInDay) + 1

    return dayOfYear
end

-- Вычисление точки терминатора
function Terminator(width, height, date, x)
    local secondsInDay = 86400
    local twoPI = 2 * math.pi

    local xScale = twoPI / width
    local yScale = height / math.pi

    local timeSeconds = date.hour * 3600 + date.min * 60 + date.sec
    local noonSeconds = secondsInDay / 2

    local timeOffsetX = (timeSeconds + noonSeconds) * twoPI / secondsInDay
    local dayOfYear = GetDayOfYear(date)
    local vernalEquinox = GetDayOfYear(os.date("!*t", os.time { year = date.year, month = 3, day = 20 }))

    local maxDeclination = 23.44 * math.pi / 90
    local declination = math.sin(twoPI * (dayOfYear - vernalEquinox) / 365) * maxDeclination

    local worldX = x * xScale + timeOffsetX
    local worldY = math.atan(-math.cos(worldX) / math.tan(declination))
    worldY = height / 2 + worldY * yScale

    return math.min(height, math.max(0, worldY))
end
