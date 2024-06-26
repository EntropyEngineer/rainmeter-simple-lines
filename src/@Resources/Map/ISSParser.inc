[OpenNotifyParser]
Measure=WebParser
URL=http://api.open-notify.org/iss-now.json
UpdateRate=5 ;Время обновления: 5 * 1000 мс (Rainmeter:Update) = 5 секунд
Flags=Resync | NoCookies | ForceReload | NoCacheWrite
RegExp=(?sU)^(.*)$
StringIndex=0
FinishAction=[!EnableMeasureGroup ISSLatLong][!ShowMeter MeterISSPoint]
OnConnectErrorAction=[!DisableMeasureGroup ISSLatLong][!HideMeter MeterISSPoint]
Disabled=#HideISS#

[MeasureISSLatitude]
Measure=Plugin
Plugin=JsonParser
Source=[OpenNotifyParser]
DynamicVariables=1
Query="iss_position.latitude"
Group=ISSLatLong
Disabled=1

[MeasureISSLongitude]
Measure=Plugin
Plugin=JsonParser
Source=[OpenNotifyParser]
DynamicVariables=1
Query="iss_position.longitude"
Group=ISSLatLong
Disabled=1

[MeasureISSMapX]
Measure=Calc
DynamicVariables=1
Formula=[MeasureWidth] * ([MeasureISSLongitude] + 180) / 360

[MeasureISSMapY]
Measure=Calc
DynamicVariables=1
Formula=[MeasureHeight] * (90 - [MeasureISSLatitude]) / 180
OnChangeAction=[!UpdateMeter MeterISSPoint]
