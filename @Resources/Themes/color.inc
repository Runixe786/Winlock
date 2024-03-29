[Variables]
BackgroundColor=#ColorThemeBackground#
ForegroundColor=#ColorThemeForeground#
IsDark=1
GrayColor = 80808040

[ChameleonMeasure]
Measure=Plugin
Group=ColorTheme
Plugin=Chameleon
Type=Desktop

[BackgroundColor]
Measure=Plugin
Group=ColorTheme
Plugin=Chameleon
Parent=ChameleonMeasure
Color=Average

[ForegroundColor]
Measure=Plugin
Group=ColorTheme
Plugin=Chameleon
Parent=ChameleonMeasure
Color=Foreground1

[ColorThemeBackground]
Measure=String
String=#ColorThemeBackground#
Substitute="%0":"[*BackgroundColor*]","%1":"[*ForegroundColor*]"
OnUpdateAction=[!SetVariable BackgroundColor [#CURRENTSECTION#]]

[ColorThemeForeground]
Measure=String
String=#ColorThemeForeground#
Substitute="%0":"[*BackgroundColor*]","%1":"[*ForegroundColor*]"
OnUpdateAction=[!SetVariable ForegroundColor [#CURRENTSECTION#]]

[IsDark]
Measure=Plugin
Group=ColorTheme
Plugin=Chameleon
Parent=ChameleonMeasure
Color=Luminance
RegExpSubstitute=1
Substitute="0.[5-9].*":"0","0.[0-4].*":"1"
OnUpdateAction=[!SetVariable IsDark [IsDark]]