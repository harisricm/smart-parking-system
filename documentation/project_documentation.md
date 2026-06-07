# Smart Parking System

## Introduction

The Smart Parking System is an IoT-based solution that monitors parking slot availability using an ultrasonic sensor and ESP32.

## Objective

The objective of this project is to detect vehicle presence and indicate whether a parking space is occupied or available.

## Components Used

* ESP32
* HC-SR04 Ultrasonic Sensor
* LED Indicator
* Wokwi Simulator

## Working Principle

1. The ultrasonic sensor measures the distance to an object.
2. ESP32 reads the distance value.
3. If the measured distance is less than the threshold value, the parking slot is considered occupied.
4. If the distance is greater than the threshold value, the parking slot is considered available.
5. The LED indicates parking status and values are displayed in the Serial Monitor.

## Advantages

* Easy parking monitoring
* Low-cost implementation
* Real-time detection
* Simple automation

## Applications

* Smart parking lots
* Shopping malls
* Office buildings
* Smart city projects

## Conclusion

The Smart Parking System demonstrates how IoT technology can be used to monitor parking availability efficiently and improve parking management.
