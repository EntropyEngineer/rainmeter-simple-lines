[MeasureDriveLabelRepeatIndex#]
Measure=FreeDiskSpace
Drive=RepeatIndex#:
Group=MeasureDriveRepeatIndex#
Label=1
UpdateDivider=-1

[MeasureDriveTotalRepeatIndex#]
Measure=FreeDiskSpace
Drive=RepeatIndex#:
Total=1
IfAboveValue=0
IfAboveAction=[!ShowMeterGroup "DriveRepeatIndex#"][!EnableMeasureGroup "MeasureDriveRepeatIndex#"][!SetOptionGroup DriveRepeatIndex# Y ""]
IfEqualValue=0
IfEqualAction=[!HideMeterGroup "DriveRepeatIndex#"][!DisableMeasureGroup "MeasureDriveRepeatIndex#"][!SetOptionGroup DriveRepeatIndex# Y 0R]
UpdateDivider=-1

[MeasureDriveFreeRepeatIndex#]
Measure=FreeDiskSpace
Drive=RepeatIndex#:
Group=MeasureDriveRepeatIndex#
UpdateDivider=5

[MeasureDriveBusyRepeatIndex#]
Measure=FreeDiskSpace
Drive=RepeatIndex#:
Group=MeasureDriveRepeatIndex#
InvertMeasure=1
UpdateDivider=5