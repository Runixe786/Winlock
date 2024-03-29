[Rainmeter]
ContextTitle    = #tEdit# "[#t[#WidgetName]]"
ContextAction   = [!WriteKeyValue Variables ReturnTo "#WidgetSize#.ini" "#@#Variables\#WidgetName#.inc"][!ActivateConfig "#CURRENTCONFIG#" "Settings.ini"]
ContextTitle2   = ---
ContextAction2  = []
ContextTitle3   = #tMedium#
ContextAction3  = [!ActivateConfig "#CURRENTCONFIG#" "Medium.ini"]
ContextTitle4   = #tWide#
ContextAction4  = [!ActivateConfig "#CURRENTCONFIG#" "Wide.ini"]
ContextTitle5   = #tLarge#
ContextAction5  = [!ActivateConfig "#CURRENTCONFIG#" "Large.ini"]
ContextTitle6   = ---
ContextAction6  = []
ContextTitle7   = #tRemoveWidget#
ContextAction7  = [!DeactivateConfig "#CURRENTCONFIG#"]
ContextTitle8   = ---
ContextAction8  = []

[SetTickMark]
Measure=String
String=#WidgetSize#
IfMatch=small
IfMatchAction=[!SetVariable tSmall "#tSmall#  [\x2714]"]
IfMatch2=medium
IfMatchAction2=[!SetVariable tMedium "#tMedium#  [\x2714]"]
IfMatch3=wide
IfMatchAction3=[!SetVariable tWide "#tWide#  [\x2714]"]
IfMatch4=large
IfMatchAction4=[!SetVariable tLarge "#tLarge#  [\x2714]"]

[BackgroundMeter]
Meter = Shape
DynamicVariables = 1
Shape = Rectangle 0, 0, #WidgetWidth#, #WidgetHeight#, #WidgetRadius#, #WidgetRadius# | Fill Color #BackgroundColor# | StrokeWidth 0
Padding = #WidgetPadding#, #WidgetPadding#, #WidgetPadding#, #WidgetPadding#
RightMouseUpAction = [!SetVariable Context "Widget"][!SkinCustomMenu]

[Variables]
@include  = #@#Variables\Global.inc
@include1 = #@#Languages\#Language#.inc
@include2 = #@#Themes\#Theme#.inc
@include3 = #@#Sizes\#WidgetSize#.inc

WidgetCenterX = (#WidgetPadding# + #WidgetWidth# / 2)
WidgetCenterY = (#WidgetPadding# + #WidgetHeight# / 2)
