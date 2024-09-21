# Smart Home Security System

This project is a **Smart Home Security System** designed to protect homes and other types of buildings from intruders, fire, and gas leaks. The system uses multiple sensors (PIR motion sensor, flame sensor, and MQ-2 gas sensor) to detect unauthorized access, fire, and dangerous gases, providing real-time notifications through an LCD display and a buzzer.

---

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Working Mechanism](#working-mechanism)
- [Installation](#installation)
- [Usage](#usage)
- [Project Members](#project-members)
- [Future Improvements](#future-improvements)
- [References](#references)

---

## Introduction

Security systems are essential for homes and buildings to prevent unauthorized access and reduce potential risks from accidents like fires and gas leaks. The **Smart Home Security System** enhances security using low-cost sensors that detect motion, flames, and gas presence, with notifications provided through a buzzer and LCD display.

## Features

- **PIR Motion Sensor**: Detects human movement.
- **Flame Sensor**: Detects flames and fire hazards.
- **MQ-2 Smoke and Gas Sensor**: Detects flammable gases and smoke.
- **Real-Time Alerts**: Alerts the user of potential threats through an LCD display and buzzer.

## Technologies Used

- **Arduino UNO R3**: The microcontroller responsible for handling sensor input and controlling the system.
- **PIR Motion Sensor**: Detects movement through infrared radiation.
- **Flame Sensor**: Detects fire by sensing infrared light.
- **MQ-2 Smoke and Gas Sensor**: Detects the presence of dangerous gases such as LPG, methane, and smoke.
- **20x4 LCD Display**: Provides real-time status information about the sensors.
- **Buzzer**: Provides audio alerts in case of detection of movement, gas, or flame.

## Working Mechanism

1. **PIR Motion Sensor** detects movement in a range of up to 30 feet and a 110-180 degree field of view. When movement is detected, it sends a signal to the Arduino which triggers the buzzer and updates the LCD display.
2. **MQ-2 Smoke and Gas Sensor** detects dangerous gas concentrations in the air. When gas is detected, the Arduino triggers the buzzer and displays the warning on the LCD.
3. **Flame Sensor** detects infrared radiation from flames. Upon detection, it sends a signal to the Arduino, which activates the buzzer and LCD warning.

## Installation

1. **Hardware Setup**:
   - Connect the PIR motion sensor, flame sensor, and MQ-2 gas sensor to the Arduino UNO as described in the documentation.
   - Connect the 20x4 LCD display to the Arduino using an I2C module.
   - Attach the buzzer to the digital pins on the Arduino.
   
2. **Software Setup**:
   - Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
   - Upload the code from the `src` directory to your Arduino UNO.
   
3. **Dependencies**:
   - Install the necessary libraries for Arduino:
     - `Wire.h` for I2C communication with the LCD.
     - `LiquidCrystal_I2C.h` for LCD control.

## Usage

1. Power the Arduino UNO.
2. The sensors will begin to monitor the environment. When a sensor detects motion, flame, or gas, the system will:
   - Sound the buzzer.
   - Display the type of detection on the LCD screen.
3. To stop the buzzer, reset the Arduino or address the cause of the alert.

## Project Members

- **Aunon Halder** - (ID: 20301133)  
  Responsibilities: Hardware connections, programming, application area analysis, cost estimation.
  
- **Rifa Tasfiya** - (ID: 20301126)  
  Responsibilities: Sensor working mechanism, technology details, data flow analysis, work plan.

## Future Improvements

- Integrate **remote monitoring** using a mobile app or web interface.
- Add additional sensors like a **wind sensor** or **voice alarm** to improve detection.
- Expand functionality for **internet-based notifications**.

## References

1. [How to Make a Security Alarm Using PIR Sensor & Arduino](https://how2electronics.com/security-alarm-using-pir-sensor-arduino/)
2. [Smoke Detection Alarm Using MQ-2 Sensor & Arduino](https://www.geeksforgeeks.org/how-to-make-smoke-detection-alarm-using-arduino/)
3. [MQ-2 Gas Sensor with Arduino](https://www.watelectronics.com/mq2-arduino-gas-sensor/)
