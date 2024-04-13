[MeterContainerRepeatIndex#]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveRepeatIndex#

[MeterContainerHoverRepeatIndex#]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerRepeatIndex# BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerRepeatIndex#][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerRepeatIndex# BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerRepeatIndex#][!Redraw]
DynamicVariables=1
Group=DriveRepeatIndex#
LeftMouseUpAction=!Execute ["RepeatIndex#:"]

[MeterDriveLabelRepeatIndex#]
Meter=String
MeasureName=MeasureDriveLabelRepeatIndex#
MeterStyle=MainMeterStyle | TextMeterStyle
Text=RepeatIndex#: %1
Group=DriveRepeatIndex#
Hidden=1

[MeterBarDriveRepeatIndex#]
Meter=Bar
MeasureName=MeasureDriveBusyRepeatIndex#
MeterStyle=BarMeterStyle
Group=DriveRepeatIndex#
Hidden=1

[MeterDriveFreeRepeatIndex#]
Meter=String
MeasureName=MeasureDriveFreeRepeatIndex#
MeasureName2=MeasureDriveTotalRepeatIndex#
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveRepeatIndex#
Hidden=1
