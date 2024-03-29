[Rainmeter]
ContextTitle=[#[#Context]ContextTitle]
ContextAction=[#[#Context]ContextAction]
ContextTitle2=[#[#Context]ContextTitle2]
ContextAction2=[#[#Context]ContextAction2]
ContextTitle3=[#[#Context]ContextTitle3]
ContextAction3=[#[#Context]ContextAction3]
ContextTitle4=[#[#Context]ContextTitle4]
ContextAction4=[#[#Context]ContextAction4]
ContextTitle5=[#[#Context]ContextTitle5]
ContextAction5=[#[#Context]ContextAction5]
ContextTitle6=[#[#Context]ContextTitle6]
ContextAction6=[#[#Context]ContextAction6]
ContextTitle7=[#[#Context]ContextTitle7]
ContextAction7=[#[#Context]ContextAction7]
ContextTitle8=[#[#Context]ContextTitle8]
ContextAction8=[#[#Context]ContextAction8]
ContextTitle9=[#[#Context]ContextTitle9]
ContextAction9=[#[#Context]ContextAction9]
ContextTitle10=[#[#Context]ContextTitle10]
ContextAction10=[#[#Context]ContextAction10]
ContextTitle11=[#[#Context]ContextTitle11]
ContextAction11=[#[#Context]ContextAction11]
ContextTitle12=[#[#Context]ContextTitle12]
ContextAction12=[#[#Context]ContextAction12]
ContextTitle13=[#[#Context]ContextTitle13]
ContextAction13=[#[#Context]ContextAction13]
ContextTitle14=[#[#Context]ContextTitle14]
ContextAction14=[#[#Context]ContextAction14]
ContextTitle15=[#[#Context]ContextTitle15]
ContextAction15=[#[#Context]ContextAction15]

[Variables]
@include=#@#Languages\all.inc
WidgetHeight=300

LanguagesContextTitle=#ru#
LanguagesContextAction=[!WriteKeyValue Variables "Language" "ru" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
LanguagesContextTitle2=#ua#
LanguagesContextAction2=[!WriteKeyValue Variables "Language" "ua" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
LanguagesContextTitle3=#en#
LanguagesContextAction3=[!WriteKeyValue Variables "Language" "en" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
LanguagesContextTitle4=#de#
LanguagesContextAction4=[!WriteKeyValue Variables "Language" "de" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
LanguagesContextTitle5=

UnitsContextTitle=#tMetric#
UnitsContextAction=[!WriteKeyValue Variables "Units" "metric" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
UnitsContextTitle2=#tImperial#
UnitsContextAction2=[!WriteKeyValue Variables "Units" "imperial" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
UnitsContextTitle3=#tStandard#
UnitsContextAction3=[!WriteKeyValue Variables "Units" "standard" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
UnitsContextTitle4=

[LanguageLabel]
Meter=String
Text=#tLanguage#:
FontFace=#FontFace#
FontColor=#ForegroundColor#
FontSize=10
AntiAlias=1
StringAlign=Right
X=(#SidebarWidth#+155)
Y=(105)
DynamicVariables=1

[LanguageValue]
Meter=String
Text=[#[#Language]]
FontFace=#FontFace#
FontColor=#ForegroundColor#
FontSize=10
AntiAlias=1
Padding=16,2,16,2
SolidColor=#ForegroundColor#40
DynamicVariables=1
X=(#SidebarWidth#+160)
Y=103
LeftMouseUpAction=[!SetVariable Context "Languages"][!UpdateMeasure SetLanguageTickMark][!SkinCustomMenu]

[TemperatureLabel]
Meter=String
MeterStyle=LanguageLabel
Text=#tTemperature#:
X=(#SidebarWidth#+420)

[TemperatureValue]
Meter=String
MeterStyle=LanguageValue
Text=[#t[#Units]]
X=(#SidebarWidth#+430)
LeftMouseUpAction=[!SetVariable Context "Units"][!UpdateMeasure SetUnitsTickMark][!SkinCustomMenu]

[SetLanguageTickMark]
Measure=String
String=#Language#
DynamicVariables=1
IfMatch=ru
IfMatchAction=[!SetVariable LanguagesContextTitle "#ru#  [\x2714]"]
IfMatch2=ua
IfMatchAction2=[!SetVariable LanguagesContextTitle2 "#ua#  [\x2714]"]
IfMatch3=en
IfMatchAction3=[!SetVariable LanguagesContextTitle3 "#en#  [\x2714]"]
IfMatch4=de
IfMatchAction3=[!SetVariable LanguagesContextTitle4 "#de#  [\x2714]"]

[SetUnitsTickMark]
Measure=String
String=#Units#
DynamicVariables=1
IfMatch=metric
IfMatchAction=[!SetVariable UnitsContextTitle "#tMetric#  [\x2714]"]
IfMatch2=imperial
IfMatchAction2=[!SetVariable UnitsContextTitle2 "#tImperial#  [\x2714]"]
IfMatch3=standard
IfMatchAction3=[!SetVariable UnitsContextTitle3 "#tStandard#  [\x2714]"]