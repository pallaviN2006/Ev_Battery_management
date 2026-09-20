# Ev_Battery_management
# 🔋 EV Battery Health Monitoring System

> An Arduino-based embedded systems project for monitoring key battery parameters and estimating battery health using a virtual prototype developed in Wokwi.

## 📌 Project Overview

The **EV Battery Health Monitoring System** is a simulation-based embedded systems project designed to demonstrate the fundamental concepts involved in battery monitoring and Battery Management Systems (BMS).

The system monitors and processes battery-related parameters such as:

- 🌡️ Temperature
- ⚡ Voltage
- 🔌 Current
- ❤️ State of Health (SOH)
- 🔄 Estimated Cycle Count
- ⏱️ Estimated Remaining Operating Time
- ⚠️ Battery Replacement Warning

The monitored information is displayed using **16×2 LCD displays**.

>  This project is an educational virtual prototype developed using Arduino in Wokwi. Potentiometers are used to simulate certain battery parameters.


## ▶️ Wokwi Simulation

The complete virtual prototype of this project is available on Wokwi.

👉 [Open the Wokwi Simulation](https://wokwi.com/projects/467145974614436865)

---

## 🎯 Project Objective

The objective of this project is to develop a simple embedded battery-monitoring system that can:

1. Acquire analog sensor inputs.
2. Convert raw ADC values into meaningful parameters.
3. Estimate battery State of Health.
4. Estimate cycle count using a simplified aging model.
5. Calculate approximate remaining operating time.
6. Display battery information in real time.
7. Generate a battery replacement warning based on predefined conditions.

---

## 🧠 Key Embedded Concepts Demonstrated

This project demonstrates practical understanding of:

- Embedded C/C++ programming
- Arduino microcontroller programming
- Analog-to-Digital Conversion (ADC)
- Sensor interfacing
- LCD interfacing
- GPIO configuration
- Real-time parameter monitoring
- Mathematical data processing
- Conditional decision making
- Battery health concepts
- Embedded-system simulation and debugging

---

## ⚙️ System Architecture

```text
        ┌──────────────────────┐
        │   Analog Inputs      │
        │                      │
        │ Temperature          │
        │ Voltage              │
        │ Current              │
        └──────────┬───────────┘
                   │
                   ▼
        ┌──────────────────────┐
        │     Arduino Uno      │
        │                      │
        │ ADC Processing       │
        │ Parameter Calculation│
        │ SOH Estimation       │
        │ Cycle Estimation     │
        │ Time Estimation      │
        └──────────┬───────────┘
                   │
                   ▼
        ┌──────────────────────┐
        │     LCD Displays     │
        │                      │
        │ Temperature          │
        │ Voltage              │
        │ Current              │
        │ SOH                  │
        │ Cycle Count          │
        │ Remaining Time       │
        │ Battery Status       │
        └──────────────────────┘





[GitHub Profile](https://github.com/pallaviN2006)
