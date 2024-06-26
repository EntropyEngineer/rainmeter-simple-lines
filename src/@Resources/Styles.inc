[Variables]
MAIN_FONT=Rubik Light
THIN_FONT=Rubik Light Mod
DECORATIVE_FONT=Andantino script

; | Базовый цвет
TEXT_COLOR=206,208,208
; | Контрастный цвет
TEXT_SECOND_COLOR=105,155,115
; | Цвет тени текста
TEXT_SHADOW_COLOR=0,0,0,150
; | Цвет незаполненной шкалы
BAR_BASE_COLOR=255,255,255,25
; | Цвет фона, который проявляется при наведении
HOVER_BG_STYLE=Fill Color 0,0,0,50
; | Цвет затемнения неосвещённой части планеты
NIGHT_SIDE_BG_STYLE=Fill Color 0,0,0,75

[MainMeterStyle]
FontFace=#MAIN_FONT#
FontColor=#TEXT_COLOR#
StringEffect=SHADOW
FontEffectColor=#TEXT_SHADOW_COLOR#
AntiAlias=1

[TextMeterStyle]
AutoScale=1
FontColor=#TEXT_COLOR#
FontSize=10
X=#PADDING#
Y=0r

[BarMeterStyle]
H=1
BarColor=#TEXT_SECOND_COLOR#
SolidColor=#BAR_BASE_COLOR#
BarOrientation=Horizontal
X=#PADDING#
Y=4R
W=(#WIDTH# - #PADDING# * 2)