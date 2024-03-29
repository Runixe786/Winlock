[Rainmeter]
RightMouseUpAction=[]

[Variables]
WidgetSize= large
Context   = Empty
@include  = #@#Variables\Global.inc
@include1 = #@#Languages\#Language#.inc
@include2 = #@#Themes\#Theme#.inc
@include3 = #@#Sizes\#WidgetSize#.inc
@include4 = #@#Variables\#WidgetName#.inc

WidgetCenterX = (#WidgetPadding# + #WidgetWidth# / 2)
WidgetCenterY = (#WidgetPadding# + #WidgetHeight# / 2)

[BackgroundMeter]
Meter = Shape
DynamicVariables = 1
Shape = Rectangle 0, 0, #WidgetWidth#, #WidgetHeight#, #WidgetRadius#, #WidgetRadius# | Fill Color #BackgroundColor# | StrokeWidth 0
Padding = #WidgetPadding#, #WidgetPadding#, #WidgetPadding#, #WidgetPadding#

[IconMeter]
Meter=Image
ImageName=#@#Images\Icons\#WidgetName#.png
X=(#WidgetPadding# + #WidgetWidth# * 0.06)
Y=(#WidgetPadding# + #WidgetHeight# * 0.06)
W=(#WidgetWidth# * 0.1)
H=(#WidgetHeight# * 0.1)

[Title]
Meter=String
Text=[#t[#WidgetName]]
FontSize=(#WidgetWidth# * 0.035)
FontFace=#FontFace#
FontColor=#ForegroundColor#
DynamicVariables=1
FontWeight=600
AntiAlias=1
X=(#WidgetPadding# + #WidgetWidth# * 0.2)
Y=(#WidgetPadding# + #WidgetHeight# * 0.08)
W=(#WidgetWidth# * 0.5)
ClipString=1

[SaveText]
Meter=String
Text=#tSave#
FontFace=#FontFace#
FontSize=(#WidgetWidth# * 0.03)
FontColor=#ForegroundColor#
DynamicVariables=1
AntiAlias=1
StringAlign=Right
X=(#WidgetPadding# + #WidgetWidth# * 0.92)
Y=(#WidgetPadding# + #WidgetHeight# * 0.08)
LeftMouseUpAction=[!ActivateConfig "#CURRENTCONFIG#" "#ReturnTo#"]
SolidColor=#GrayColor#
Padding=12,2,12,2

[Description]
Meter=String
Text=[#t[#WidgetName]Description]
FontSize=(#WidgetWidth# * 0.0325)
FontFace=#FontFace#
FontColor=128,128,128
FontWeight=300
AntiAlias=1
X=(#WidgetPadding# + #WidgetWidth# * 0.05)
Y=(#WidgetPadding# + #WidgetHeight# * 0.19)
W=(#WidgetWidth#*0.87)
ClipString=1
