[Variables]
@Include=#@#Settings.inc

URL=https://yandex.ru/pogoda/?lat=#Latitude#&lon=#Longitude#
WEATHER_DATA=(?siU)aria-label="Текущая температура (.*)°, Ощущается как (.*)°, (.*)." data-bem.*aria-hidden="true" src=(.*)\/>.*>(Ветер: (.*) Метров в секунду, (.*).|Штиль)<\/span>.*">Влажность: (.*)%.<\/span>.*>Давление: (.*) .*.<\/span>.*

[YandexWeatherParser]
Measure=WebParser
URL=#URL#
UpdateRate=(60 * #YandexWetherUpdateRate#)
Flags=Resync | NoCookies | ForceReload | Secure
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:124.0) Gecko/20100101 Firefox/124.0
DecodeCharacterReference=1
RegExp=(?siU)^(.*)$
StringIndex=1

[MeasureCurrentObservations]
Measure=WebParser
URL=[YandexWeatherParser]
StringIndex=1
RegExp=#WEATHER_DATA#

; =================
; === ИЗМЕРЕНИЯ ===
; =================

; ===== Температура =====

[MeasureTemp]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=1
DynamicVariables=1

; ===== Температура по ощущениям =====

[MeasureFeelsLike]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=2
DynamicVariables=1

; ===== Облачность =====

[MeasureCondition]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=3
DynamicVariables=1

; ===== Имя файла изображения текущего состояния облачности =====
; https://yandex.ru/dev/weather/doc/ru/concepts/icons

[MeasureConditionImage]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=4
RegExp="[^\/]+(?=\.[^\/.]*$)"
DynamicVariables=1
OnChangeAction=[!UpdateMeter IconCondition]

; ===== Штиль =====

[MeasureWindCalm]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=5
DynamicVariables=1

; ===== Скорость ветра =====

[MeasureWindSpeed]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=6
DynamicVariables=1

; ===== Направление ветра =====

[MeasureWindDirection]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=7
DynamicVariables=1
Substitute="северо-западный":"СЗ","юго-западный":"ЮЗ","северо-восточный":"СВ","юго-восточный":"ЮВ","северный":"С","восточный":"В","южный":"Ю","западный":"З"

[MeasureWindDirectionDegree]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=7
DynamicVariables=1
Substitute="северо-западный":"135","юго-западный":"45","северо-восточный":"225","юго-восточный":"315","северный":"180","восточный":"270","южный":"0","западный":"90"

; ===== Влажность =====

[MeasureHumidity]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=8
DynamicVariables=1

; ===== Давление =====

[MeasurePressure]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=9
DynamicVariables=1



