[MeterContainerA]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveA

[MeterContainerHoverA]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerA BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerA][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerA BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerA][!Redraw]
DynamicVariables=1
Group=DriveA
LeftMouseUpAction=!Execute ["A:"]

[MeterDriveLabelA]
Meter=String
MeasureName=MeasureDriveLabelA
MeterStyle=MainMeterStyle | TextMeterStyle
Text=A: %1
Group=DriveA
Hidden=1

[MeterBarDriveA]
Meter=Bar
MeasureName=MeasureDriveBusyA
MeterStyle=BarMeterStyle
Group=DriveA
Hidden=1

[MeterDriveFreeA]
Meter=String
MeasureName=MeasureDriveFreeA
MeasureName2=MeasureDriveTotalA
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveA
Hidden=1


[MeterContainerB]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveB

[MeterContainerHoverB]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerB BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerB][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerB BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerB][!Redraw]
DynamicVariables=1
Group=DriveB
LeftMouseUpAction=!Execute ["B:"]

[MeterDriveLabelB]
Meter=String
MeasureName=MeasureDriveLabelB
MeterStyle=MainMeterStyle | TextMeterStyle
Text=B: %1
Group=DriveB
Hidden=1

[MeterBarDriveB]
Meter=Bar
MeasureName=MeasureDriveBusyB
MeterStyle=BarMeterStyle
Group=DriveB
Hidden=1

[MeterDriveFreeB]
Meter=String
MeasureName=MeasureDriveFreeB
MeasureName2=MeasureDriveTotalB
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveB
Hidden=1


[MeterContainerC]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveC

[MeterContainerHoverC]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerC BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerC][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerC BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerC][!Redraw]
DynamicVariables=1
Group=DriveC
LeftMouseUpAction=!Execute ["C:"]

[MeterDriveLabelC]
Meter=String
MeasureName=MeasureDriveLabelC
MeterStyle=MainMeterStyle | TextMeterStyle
Text=C: %1
Group=DriveC
Hidden=1

[MeterBarDriveC]
Meter=Bar
MeasureName=MeasureDriveBusyC
MeterStyle=BarMeterStyle
Group=DriveC
Hidden=1

[MeterDriveFreeC]
Meter=String
MeasureName=MeasureDriveFreeC
MeasureName2=MeasureDriveTotalC
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveC
Hidden=1


[MeterContainerD]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveD

[MeterContainerHoverD]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerD BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerD][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerD BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerD][!Redraw]
DynamicVariables=1
Group=DriveD
LeftMouseUpAction=!Execute ["D:"]

[MeterDriveLabelD]
Meter=String
MeasureName=MeasureDriveLabelD
MeterStyle=MainMeterStyle | TextMeterStyle
Text=D: %1
Group=DriveD
Hidden=1

[MeterBarDriveD]
Meter=Bar
MeasureName=MeasureDriveBusyD
MeterStyle=BarMeterStyle
Group=DriveD
Hidden=1

[MeterDriveFreeD]
Meter=String
MeasureName=MeasureDriveFreeD
MeasureName2=MeasureDriveTotalD
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveD
Hidden=1


[MeterContainerE]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveE

[MeterContainerHoverE]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerE BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerE][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerE BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerE][!Redraw]
DynamicVariables=1
Group=DriveE
LeftMouseUpAction=!Execute ["E:"]

[MeterDriveLabelE]
Meter=String
MeasureName=MeasureDriveLabelE
MeterStyle=MainMeterStyle | TextMeterStyle
Text=E: %1
Group=DriveE
Hidden=1

[MeterBarDriveE]
Meter=Bar
MeasureName=MeasureDriveBusyE
MeterStyle=BarMeterStyle
Group=DriveE
Hidden=1

[MeterDriveFreeE]
Meter=String
MeasureName=MeasureDriveFreeE
MeasureName2=MeasureDriveTotalE
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveE
Hidden=1


[MeterContainerF]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveF

[MeterContainerHoverF]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerF BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerF][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerF BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerF][!Redraw]
DynamicVariables=1
Group=DriveF
LeftMouseUpAction=!Execute ["F:"]

[MeterDriveLabelF]
Meter=String
MeasureName=MeasureDriveLabelF
MeterStyle=MainMeterStyle | TextMeterStyle
Text=F: %1
Group=DriveF
Hidden=1

[MeterBarDriveF]
Meter=Bar
MeasureName=MeasureDriveBusyF
MeterStyle=BarMeterStyle
Group=DriveF
Hidden=1

[MeterDriveFreeF]
Meter=String
MeasureName=MeasureDriveFreeF
MeasureName2=MeasureDriveTotalF
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveF
Hidden=1


[MeterContainerG]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveG

[MeterContainerHoverG]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerG BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerG][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerG BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerG][!Redraw]
DynamicVariables=1
Group=DriveG
LeftMouseUpAction=!Execute ["G:"]

[MeterDriveLabelG]
Meter=String
MeasureName=MeasureDriveLabelG
MeterStyle=MainMeterStyle | TextMeterStyle
Text=G: %1
Group=DriveG
Hidden=1

[MeterBarDriveG]
Meter=Bar
MeasureName=MeasureDriveBusyG
MeterStyle=BarMeterStyle
Group=DriveG
Hidden=1

[MeterDriveFreeG]
Meter=String
MeasureName=MeasureDriveFreeG
MeasureName2=MeasureDriveTotalG
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveG
Hidden=1


[MeterContainerH]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveH

[MeterContainerHoverH]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerH BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerH][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerH BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerH][!Redraw]
DynamicVariables=1
Group=DriveH
LeftMouseUpAction=!Execute ["H:"]

[MeterDriveLabelH]
Meter=String
MeasureName=MeasureDriveLabelH
MeterStyle=MainMeterStyle | TextMeterStyle
Text=H: %1
Group=DriveH
Hidden=1

[MeterBarDriveH]
Meter=Bar
MeasureName=MeasureDriveBusyH
MeterStyle=BarMeterStyle
Group=DriveH
Hidden=1

[MeterDriveFreeH]
Meter=String
MeasureName=MeasureDriveFreeH
MeasureName2=MeasureDriveTotalH
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveH
Hidden=1


[MeterContainerI]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveI

[MeterContainerHoverI]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerI BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerI][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerI BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerI][!Redraw]
DynamicVariables=1
Group=DriveI
LeftMouseUpAction=!Execute ["I:"]

[MeterDriveLabelI]
Meter=String
MeasureName=MeasureDriveLabelI
MeterStyle=MainMeterStyle | TextMeterStyle
Text=I: %1
Group=DriveI
Hidden=1

[MeterBarDriveI]
Meter=Bar
MeasureName=MeasureDriveBusyI
MeterStyle=BarMeterStyle
Group=DriveI
Hidden=1

[MeterDriveFreeI]
Meter=String
MeasureName=MeasureDriveFreeI
MeasureName2=MeasureDriveTotalI
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveI
Hidden=1


[MeterContainerJ]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveJ

[MeterContainerHoverJ]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerJ BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerJ][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerJ BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerJ][!Redraw]
DynamicVariables=1
Group=DriveJ
LeftMouseUpAction=!Execute ["J:"]

[MeterDriveLabelJ]
Meter=String
MeasureName=MeasureDriveLabelJ
MeterStyle=MainMeterStyle | TextMeterStyle
Text=J: %1
Group=DriveJ
Hidden=1

[MeterBarDriveJ]
Meter=Bar
MeasureName=MeasureDriveBusyJ
MeterStyle=BarMeterStyle
Group=DriveJ
Hidden=1

[MeterDriveFreeJ]
Meter=String
MeasureName=MeasureDriveFreeJ
MeasureName2=MeasureDriveTotalJ
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveJ
Hidden=1


[MeterContainerK]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveK

[MeterContainerHoverK]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerK BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerK][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerK BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerK][!Redraw]
DynamicVariables=1
Group=DriveK
LeftMouseUpAction=!Execute ["K:"]

[MeterDriveLabelK]
Meter=String
MeasureName=MeasureDriveLabelK
MeterStyle=MainMeterStyle | TextMeterStyle
Text=K: %1
Group=DriveK
Hidden=1

[MeterBarDriveK]
Meter=Bar
MeasureName=MeasureDriveBusyK
MeterStyle=BarMeterStyle
Group=DriveK
Hidden=1

[MeterDriveFreeK]
Meter=String
MeasureName=MeasureDriveFreeK
MeasureName2=MeasureDriveTotalK
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveK
Hidden=1


[MeterContainerL]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveL

[MeterContainerHoverL]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerL BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerL][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerL BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerL][!Redraw]
DynamicVariables=1
Group=DriveL
LeftMouseUpAction=!Execute ["L:"]

[MeterDriveLabelL]
Meter=String
MeasureName=MeasureDriveLabelL
MeterStyle=MainMeterStyle | TextMeterStyle
Text=L: %1
Group=DriveL
Hidden=1

[MeterBarDriveL]
Meter=Bar
MeasureName=MeasureDriveBusyL
MeterStyle=BarMeterStyle
Group=DriveL
Hidden=1

[MeterDriveFreeL]
Meter=String
MeasureName=MeasureDriveFreeL
MeasureName2=MeasureDriveTotalL
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveL
Hidden=1


[MeterContainerM]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveM

[MeterContainerHoverM]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerM BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerM][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerM BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerM][!Redraw]
DynamicVariables=1
Group=DriveM
LeftMouseUpAction=!Execute ["M:"]

[MeterDriveLabelM]
Meter=String
MeasureName=MeasureDriveLabelM
MeterStyle=MainMeterStyle | TextMeterStyle
Text=M: %1
Group=DriveM
Hidden=1

[MeterBarDriveM]
Meter=Bar
MeasureName=MeasureDriveBusyM
MeterStyle=BarMeterStyle
Group=DriveM
Hidden=1

[MeterDriveFreeM]
Meter=String
MeasureName=MeasureDriveFreeM
MeasureName2=MeasureDriveTotalM
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveM
Hidden=1


[MeterContainerN]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveN

[MeterContainerHoverN]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerN BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerN][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerN BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerN][!Redraw]
DynamicVariables=1
Group=DriveN
LeftMouseUpAction=!Execute ["N:"]

[MeterDriveLabelN]
Meter=String
MeasureName=MeasureDriveLabelN
MeterStyle=MainMeterStyle | TextMeterStyle
Text=N: %1
Group=DriveN
Hidden=1

[MeterBarDriveN]
Meter=Bar
MeasureName=MeasureDriveBusyN
MeterStyle=BarMeterStyle
Group=DriveN
Hidden=1

[MeterDriveFreeN]
Meter=String
MeasureName=MeasureDriveFreeN
MeasureName2=MeasureDriveTotalN
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveN
Hidden=1


[MeterContainerO]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveO

[MeterContainerHoverO]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerO BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerO][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerO BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerO][!Redraw]
DynamicVariables=1
Group=DriveO
LeftMouseUpAction=!Execute ["O:"]

[MeterDriveLabelO]
Meter=String
MeasureName=MeasureDriveLabelO
MeterStyle=MainMeterStyle | TextMeterStyle
Text=O: %1
Group=DriveO
Hidden=1

[MeterBarDriveO]
Meter=Bar
MeasureName=MeasureDriveBusyO
MeterStyle=BarMeterStyle
Group=DriveO
Hidden=1

[MeterDriveFreeO]
Meter=String
MeasureName=MeasureDriveFreeO
MeasureName2=MeasureDriveTotalO
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveO
Hidden=1


[MeterContainerP]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveP

[MeterContainerHoverP]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerP BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerP][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerP BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerP][!Redraw]
DynamicVariables=1
Group=DriveP
LeftMouseUpAction=!Execute ["P:"]

[MeterDriveLabelP]
Meter=String
MeasureName=MeasureDriveLabelP
MeterStyle=MainMeterStyle | TextMeterStyle
Text=P: %1
Group=DriveP
Hidden=1

[MeterBarDriveP]
Meter=Bar
MeasureName=MeasureDriveBusyP
MeterStyle=BarMeterStyle
Group=DriveP
Hidden=1

[MeterDriveFreeP]
Meter=String
MeasureName=MeasureDriveFreeP
MeasureName2=MeasureDriveTotalP
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveP
Hidden=1


[MeterContainerQ]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveQ

[MeterContainerHoverQ]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerQ BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerQ][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerQ BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerQ][!Redraw]
DynamicVariables=1
Group=DriveQ
LeftMouseUpAction=!Execute ["Q:"]

[MeterDriveLabelQ]
Meter=String
MeasureName=MeasureDriveLabelQ
MeterStyle=MainMeterStyle | TextMeterStyle
Text=Q: %1
Group=DriveQ
Hidden=1

[MeterBarDriveQ]
Meter=Bar
MeasureName=MeasureDriveBusyQ
MeterStyle=BarMeterStyle
Group=DriveQ
Hidden=1

[MeterDriveFreeQ]
Meter=String
MeasureName=MeasureDriveFreeQ
MeasureName2=MeasureDriveTotalQ
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveQ
Hidden=1


[MeterContainerR]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveR

[MeterContainerHoverR]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerR BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerR][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerR BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerR][!Redraw]
DynamicVariables=1
Group=DriveR
LeftMouseUpAction=!Execute ["R:"]

[MeterDriveLabelR]
Meter=String
MeasureName=MeasureDriveLabelR
MeterStyle=MainMeterStyle | TextMeterStyle
Text=R: %1
Group=DriveR
Hidden=1

[MeterBarDriveR]
Meter=Bar
MeasureName=MeasureDriveBusyR
MeterStyle=BarMeterStyle
Group=DriveR
Hidden=1

[MeterDriveFreeR]
Meter=String
MeasureName=MeasureDriveFreeR
MeasureName2=MeasureDriveTotalR
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveR
Hidden=1


[MeterContainerS]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveS

[MeterContainerHoverS]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerS BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerS][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerS BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerS][!Redraw]
DynamicVariables=1
Group=DriveS
LeftMouseUpAction=!Execute ["S:"]

[MeterDriveLabelS]
Meter=String
MeasureName=MeasureDriveLabelS
MeterStyle=MainMeterStyle | TextMeterStyle
Text=S: %1
Group=DriveS
Hidden=1

[MeterBarDriveS]
Meter=Bar
MeasureName=MeasureDriveBusyS
MeterStyle=BarMeterStyle
Group=DriveS
Hidden=1

[MeterDriveFreeS]
Meter=String
MeasureName=MeasureDriveFreeS
MeasureName2=MeasureDriveTotalS
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveS
Hidden=1


[MeterContainerT]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveT

[MeterContainerHoverT]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerT BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerT][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerT BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerT][!Redraw]
DynamicVariables=1
Group=DriveT
LeftMouseUpAction=!Execute ["T:"]

[MeterDriveLabelT]
Meter=String
MeasureName=MeasureDriveLabelT
MeterStyle=MainMeterStyle | TextMeterStyle
Text=T: %1
Group=DriveT
Hidden=1

[MeterBarDriveT]
Meter=Bar
MeasureName=MeasureDriveBusyT
MeterStyle=BarMeterStyle
Group=DriveT
Hidden=1

[MeterDriveFreeT]
Meter=String
MeasureName=MeasureDriveFreeT
MeasureName2=MeasureDriveTotalT
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveT
Hidden=1


[MeterContainerU]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveU

[MeterContainerHoverU]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerU BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerU][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerU BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerU][!Redraw]
DynamicVariables=1
Group=DriveU
LeftMouseUpAction=!Execute ["U:"]

[MeterDriveLabelU]
Meter=String
MeasureName=MeasureDriveLabelU
MeterStyle=MainMeterStyle | TextMeterStyle
Text=U: %1
Group=DriveU
Hidden=1

[MeterBarDriveU]
Meter=Bar
MeasureName=MeasureDriveBusyU
MeterStyle=BarMeterStyle
Group=DriveU
Hidden=1

[MeterDriveFreeU]
Meter=String
MeasureName=MeasureDriveFreeU
MeasureName2=MeasureDriveTotalU
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveU
Hidden=1


[MeterContainerV]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveV

[MeterContainerHoverV]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerV BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerV][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerV BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerV][!Redraw]
DynamicVariables=1
Group=DriveV
LeftMouseUpAction=!Execute ["V:"]

[MeterDriveLabelV]
Meter=String
MeasureName=MeasureDriveLabelV
MeterStyle=MainMeterStyle | TextMeterStyle
Text=V: %1
Group=DriveV
Hidden=1

[MeterBarDriveV]
Meter=Bar
MeasureName=MeasureDriveBusyV
MeterStyle=BarMeterStyle
Group=DriveV
Hidden=1

[MeterDriveFreeV]
Meter=String
MeasureName=MeasureDriveFreeV
MeasureName2=MeasureDriveTotalV
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveV
Hidden=1


[MeterContainerW]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveW

[MeterContainerHoverW]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerW BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerW][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerW BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerW][!Redraw]
DynamicVariables=1
Group=DriveW
LeftMouseUpAction=!Execute ["W:"]

[MeterDriveLabelW]
Meter=String
MeasureName=MeasureDriveLabelW
MeterStyle=MainMeterStyle | TextMeterStyle
Text=W: %1
Group=DriveW
Hidden=1

[MeterBarDriveW]
Meter=Bar
MeasureName=MeasureDriveBusyW
MeterStyle=BarMeterStyle
Group=DriveW
Hidden=1

[MeterDriveFreeW]
Meter=String
MeasureName=MeasureDriveFreeW
MeasureName2=MeasureDriveTotalW
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveW
Hidden=1


[MeterContainerX]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveX

[MeterContainerHoverX]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerX BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerX][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerX BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerX][!Redraw]
DynamicVariables=1
Group=DriveX
LeftMouseUpAction=!Execute ["X:"]

[MeterDriveLabelX]
Meter=String
MeasureName=MeasureDriveLabelX
MeterStyle=MainMeterStyle | TextMeterStyle
Text=X: %1
Group=DriveX
Hidden=1

[MeterBarDriveX]
Meter=Bar
MeasureName=MeasureDriveBusyX
MeterStyle=BarMeterStyle
Group=DriveX
Hidden=1

[MeterDriveFreeX]
Meter=String
MeasureName=MeasureDriveFreeX
MeasureName2=MeasureDriveTotalX
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveX
Hidden=1


[MeterContainerY]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveY

[MeterContainerHoverY]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerY BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerY][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerY BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerY][!Redraw]
DynamicVariables=1
Group=DriveY
LeftMouseUpAction=!Execute ["Y:"]

[MeterDriveLabelY]
Meter=String
MeasureName=MeasureDriveLabelY
MeterStyle=MainMeterStyle | TextMeterStyle
Text=Y: %1
Group=DriveY
Hidden=1

[MeterBarDriveY]
Meter=Bar
MeasureName=MeasureDriveBusyY
MeterStyle=BarMeterStyle
Group=DriveY
Hidden=1

[MeterDriveFreeY]
Meter=String
MeasureName=MeasureDriveFreeY
MeasureName2=MeasureDriveTotalY
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveY
Hidden=1


[MeterContainerZ]
Meter=Shape
MeterStyle=DiskContainerStyle
DynamicVariables=1
Group=DriveZ

[MeterContainerHoverZ]
Meter=Image
MeterStyle=DiskContainerHoverStyle
MouseOverAction=[!SetOption MeterContainerZ BGModifier "#HOVER_BG_STYLE#"][!UpdateMeter MeterContainerZ][!Redraw]
MouseLeaveAction=[!SetOption MeterContainerZ BGModifier "Fill Color 0,0,0,0"][!UpdateMeter MeterContainerZ][!Redraw]
DynamicVariables=1
Group=DriveZ
LeftMouseUpAction=!Execute ["Z:"]

[MeterDriveLabelZ]
Meter=String
MeasureName=MeasureDriveLabelZ
MeterStyle=MainMeterStyle | TextMeterStyle
Text=Z: %1
Group=DriveZ
Hidden=1

[MeterBarDriveZ]
Meter=Bar
MeasureName=MeasureDriveBusyZ
MeterStyle=BarMeterStyle
Group=DriveZ
Hidden=1

[MeterDriveFreeZ]
Meter=String
MeasureName=MeasureDriveFreeZ
MeasureName2=MeasureDriveTotalZ
MeterStyle=MainMeterStyle | TextMeterStyle | TextMeterStyleSecond
Group=DriveZ
Hidden=1
