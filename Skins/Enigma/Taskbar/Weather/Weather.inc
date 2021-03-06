;---------------------------------------------------------------------
; MEASURES

[MeasureBar]
Measure=Calc
Formula=([@CurrentTemperature:] - [@ForecastDay2NightTemperature:]) / ([@ForecastDay2DayTemperature:] - {@ForecastDay2NightTemperature:])
DynamicVariables=1
Disabled=1

;---------------------------------------------------------------------
; METERS

[Background]
Meter=IMAGE
MeterStyle=Style#Variant#Background

[Icon]
Meter=IMAGE
MeterStyle=Style#Variant#Icon | StyleWeather#Variant#Icon
MeasureName=@CurrentIcon

[Text]
Meter=STRING
MeterStyle=Style#Variant#Text
MeasureName=@CurrentTemperature
Postfix="�"
LeftMouseUpAction=["https://weather.com/weather/today/l/#Latitude#,#Longitude#"]
;LeftMouseUpAction=["https://weather.com/#Language#/weather/today/l/#CurrentCode#"]

[Label]
Meter=STRING
MeasureName=@CurrentConditions
MeterStyle=Style#Variant#Label

[Bar]
Meter=BAR
MeterStyle=Style#Variant#Bar
MeasureName=MeasureBar