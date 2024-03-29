[Variables]
UnitsContextTitle=[#tMetric]
UnitsContextAction=[!WriteKeyValue Variables "Units" "metric" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
UnitsContextTitle2=[#tImperial]
UnitsContextAction2=[!WriteKeyValue Variables "Units" "imperial" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
UnitsContextTitle3=[#tStandard]
UnitsContextAction3=[!WriteKeyValue Variables "Units" "standard" "#@#Variables\Global.inc"][!RefreshGroup Monterey]
UnitsContextTitle4=

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