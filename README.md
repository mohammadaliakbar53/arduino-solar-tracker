# Arduino-Based Single-Axis Solar Tracking System

## Overview

This project is a single-axis solar tracking system built using an Arduino, Light Dependent Resistors (LDRs), and a servo motor.

The system detects the direction of stronger light using two LDR sensors and adjusts the solar panel's position to face the brighter direction.

The objective is to demonstrate how electronics, sensors, and embedded programming can be used to improve solar panel alignment.

## Objectives

- Understand the working principle of solar tracking.
- Learn how LDR sensors detect changes in light intensity.
- Control a servo motor using an Arduino.
- Explore practical applications of embedded systems and renewable energy.
- Develop hands-on electronics and programming skills.

## Components Used

- Arduino Uno
- 2 × Light Dependent Resistors (LDRs)
- 1 × Servo motor
- Resistors
- Breadboard
- Jumper wires
- Suitable mounting structure for the solar tracker

## Working Principle

1. Two LDR sensors measure light intensity from different directions.
2. The Arduino reads the sensors' analog values.
3. The program compares the readings.
4. When a sufficient difference is detected, the Arduino adjusts the servo motor.
5. The mechanism moves toward the brighter direction.
6. This process repeats as the light direction changes.

## Technologies Used

- Arduino
- Embedded C/C++
- Analog sensors
- Servo motor control
- Basic electronics

## Repository Structure

```text
arduino-solar-tracker/
├── README.md
├── code/
│   └── solar_tracker.ino
├── images/
│   ├── solar_tracker_front.jpg
│   └── solar_tracker_circuit.jpg
└── docs/
    └── circuit_connections.txt
```

*The structure above represents the planned organization of the project files. Add each file as it becomes available.*

## Applications

- Solar tracking demonstrations
- Renewable energy education
- Arduino and embedded systems learning
- Introduction to automated control systems

## Future Improvements

- Add a second axis for two-axis tracking.
- Measure solar panel voltage and current.
- Compare energy output with fixed-panel positioning.
- Add an LCD or OLED display for sensor readings.
- Record tracking performance under different lighting conditions.

## Learning Outcomes

This project provides practical experience with sensor interfacing, Arduino programming, servo motor control, and automated positioning.

It also demonstrates how hardware and software can work together to solve a real-world engineering problem.

## Author

Mohammad

## Project Status

Built as a practical electronics and renewable energy project.
