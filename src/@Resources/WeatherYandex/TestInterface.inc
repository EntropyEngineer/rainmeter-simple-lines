[MeasureLoop]
Measure=Loop
StartValue=1
EndValue=6
Increment=1
UpdateDivider=3

[MeasureTemp]
Measure=String
String=[MeasureLoop]
Substitute="1":"-18","2":"-8","3":"0","4":"7","5":"24","6":"10"
DynamicVariables=1

[MeasureFeelsLike]
Measure=String
String=[MeasureLoop]
Substitute="1":"-18","2":"-8","3":"0","4":"7","5":"24","6":"10"
DynamicVariables=1

[MeasureCondition]
Measure=String
String=Облачно

[MeasureConditionImage]
Measure=String
String=[MeasureLoop]
Substitute="1":"ovc","2":"-bl","3":"bkn_d","4":"ovc_ra","5":"skc_d","6":"skc_n"
DynamicVariables=1

[MeasureWindCalm]
Measure=String
String=[MeasureLoop]
Substitute="1":"Штиль","2":"Ветер: 1.1 Метров в секунду, западный.","3":"Штиль","4":"Ветер: 1.1 Метров в секунду, западный.","5":"Штиль","6":"Ветер: 1.1 Метров в секунду, западный."
DynamicVariables=1

[MeasureWindSpeed]
Measure=String
String=7.7

[MeasureWindDirection]
Measure=String
String=[MeasureLoop]
Substitute="1":"СЗ","2":"ЮЗ","3":"СВ","4":"ЮВ","5":"С","6":"В","7":"Ю","8":"З"
DynamicVariables=1

[MeasureWindDirectionDegree]
Measure=String
String=[MeasureLoop]
Substitute="1":"180","2":"225","3":"270","4":"315","5":"0","6":"45"
DynamicVariables=1

[MeasureHumidity]
Measure=String
String=[MeasureLoop]
Substitute="1":"10","2":"20","3":"37","4":"70","5":"85","6":"100"
DynamicVariables=1

[MeasurePressure]
Measure=String
String=[MeasureLoop]
Substitute="1":"770","2":"780","3":"821","4":"800","5":"750","6":"720"
DynamicVariables=1





