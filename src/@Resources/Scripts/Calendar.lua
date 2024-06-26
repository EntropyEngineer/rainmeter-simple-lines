function Update()
    local currentMonth = os.date("%m")
    local currentYear = os.date("%Y")
    local currentDayOfMonth = tonumber(os.date("%d"))
    local currentWeekDay = tonumber(os.date("%w"))

    -- Поправка на сдвиг шрифта по высоте
    local fontFactor = -1

    if currentWeekDay == 0 then
        currentWeekDay = 7
    end

    -- Подсветка дня недели
    local weekdayMeterName = 'MeterWeekDay0' .. currentWeekDay
    SKIN:Bang('!SetOption', weekdayMeterName, 'FontColor', '#TEXT_SECOND_COLOR#')
    SKIN:Bang('!UpdateMeter', weekdayMeterName)

    local firstDayOfMonth = os.time { year = currentYear, month = currentMonth, day = 1 }
    local lastDayOfMonth = tonumber(os.date("%d", os.time { year = currentYear, month = currentMonth + 1, day = 0 }))
    local firstDayOfWeek = tonumber(os.date("%w", firstDayOfMonth))

    -- Установка высоты календаря в соответствии с занятыми неделями
    local calendarRowCount = math.ceil((lastDayOfMonth + firstDayOfWeek - 1) / 7)
    SKIN:Bang('!SetVariable', 'ROW_COUNT', calendarRowCount + 1)

    local padding = SKIN:GetVariable('PADDING', 0)
    local cellWidth = SKIN:GetVariable('CELL_WIDTH', 0)
    local cellHeight = SKIN:GetVariable('CELL_HEIGHT', 0)
    local monthHeight = SKIN:GetVariable('MONTH_HEIGHT', 0)

    local dayNumber = 1
    local cellCount = 41

    for i = 0, cellCount do
        local columnNumber = (i % 7) + 1
        local lineNumber = math.floor(i / 7)
        local cellNumber = columnNumber + lineNumber * 7
        local dayMeterNumber = lineNumber * 10 + columnNumber
        local dayMeterName = 'MeterDay' .. string.format("%02d", dayMeterNumber)

        if dayMeterNumber > cellCount + 11 then
            break
        end

        if cellNumber >= firstDayOfWeek and dayNumber <= lastDayOfMonth then
            SKIN:Bang('!SetOption', dayMeterName, 'Text', dayNumber)
            SKIN:Bang('!UpdateMeter', dayMeterName)

            -- Установка координат для рамки текущего дня
            if currentDayOfMonth == dayNumber then
                SKIN:Bang('!SetOption', 'MeterToday', 'X',
                    (columnNumber - 1) * cellWidth + padding + ((cellWidth - cellHeight) / 2))
                SKIN:Bang('!SetOption', 'MeterToday', 'Y',
                    lineNumber * cellHeight + cellHeight + padding + fontFactor + monthHeight)
                SKIN:Bang('!UpdateMeter', 'MeterToday')
            end

            dayNumber = dayNumber + 1
        else
            SKIN:Bang('!SetOption', dayMeterName, 'Text', '')
            SKIN:Bang('!UpdateMeter', dayMeterName)
        end
    end

    SKIN:Bang('!Redraw')
end
