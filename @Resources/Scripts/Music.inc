[TitleMeasure]
Measure=Plugin
Group=Measures
Plugin=MediaPlayer
PlayerType=Title
UpdateDivider=10
OnChangeAction=[!Refresh]

[CoverMeasure]
Measure=Plugin
Group=Measures
Plugin=MediaPlayer
PlayerType=Cover

[ArtistMeasure]
Measure=Plugin
Group=Measures
Plugin=MediaPlayer
PlayerType=Artist

[StateMeasure]
Measure=Plugin
Group=Measures
Plugin=MediaPlayer
PlayerType=State
UpdateDivider=5
OnUpdateAction=[!UpdateMeterGroup Buttons]

[Variables]
IsColorTheme=0

[IsColorTheme]
Measure=String
String=#Theme#
IfMatch=Color
IfMatchAction=[!SetVariable IsColorTheme 1]

[CoverChameleonMeasure]
Measure=Plugin
Group=Measures
Plugin=Chameleon
Type=File
Path=[CoverMeasure]
OnUpdateAction=[!UpdateMeasure CoverColor][!UpdateMeasure CoverForegroundColor][!Redraw]

[CoverColor]
Measure=Plugin
Group=Measures
Plugin=Chameleon
Parent=CoverChameleonMeasure
Color=Average
IfCondition=(StateMeasure<>0)
IfTrueAction=[!SetVariable BackgroundColor [CoverColor]][!UpdateMeter BackgroundMeter]
IfCondition2=(StateMeasure=0)
IfTrueAction2=[!SetVariable BackgroundColor #LightThemeBackground#][!UpdateMeter BackgroundMeter]
DynamicVariables=1
Disabled=(#IsColorTheme#=1)

[CoverForegroundColor]
Measure=Plugin
Group=Measures
Plugin=Chameleon
Parent=CoverChameleonMeasure
Color=Foreground1
IfCondition=(StateMeasure<>0)
IfTrueAction=[!SetVariable ForegroundColor [CoverForegroundColor]][!UpdateMeterGroup Buttons][!UpdateMeterGroup Text]
IfCondition2=(StateMeasure=0)
IfTrueAction2=[!SetVariable ForegroundColor #LightThemeForeground#][!UpdateMeterGroup Buttons][!UpdateMeterGroup Text]
DynamicVariables=1
Disabled=(#IsColorTheme#=1)
