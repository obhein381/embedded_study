# Soil Moisture Sensor (SEN0193)

## Objective

* Learn how to use the DFRobot SEN0193 soil moisture sensor with ESP32.
* Calibrate the sensor values.
* Classify soil moisture levels into three ranges.

## Hardware

* ESP32 DevKit V1 (ESP32-WROOM-32)
* DFRobot SEN0193 Soil Moisture Sensor

## Sensor Calibration

* Average value in air (Value1): 2933
* Average value in water (Value2): 1473

## Moisture Level Ranges

| Condition | Value Range          |
| --------- | -------------------- |
| Very Wet  | value < 1960         |
| Wet       | 1960 <= value < 2447 |
| Dry       | value >= 2447        |

## Implementation

* Used GPIO32 (ADC1) to avoid ADC2-related issues.
* Read the sensor value using `analogRead()`.
* Classified the sensor values based on threshold values.
* Displayed the moisture level through the serial monitor.

## Issues

* Using only the average values as minimum and maximum boundaries may exclude valid sensor readings.
* Sensor values can fluctuate depending on the environment and measurement conditions.

## Solution

* Removed the minimum and maximum limits.
* Used only the threshold values (1960 and 2447) to classify moisture levels.
* Plan to implement standard deviation-based outlier detection in the future.

## Results

* Sensor value in air
* Sensor value when touched by hand
* Sensor value in water

## References

* ESP32 Datasheet
* DFRobot SEN0193 Official Documentation
