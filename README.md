# 🚧 IR Obstacle Detection System Using Arduino UNO

## 📌 Project Overview

This project demonstrates how to detect an obstacle using an **IR (Infrared) Obstacle Sensor Module** and an **Arduino UNO**.

The IR sensor continuously checks for objects in front of it. When an obstacle comes within the detection range, the sensor changes its digital output signal. The Arduino reads this signal and displays the obstacle status in the **Serial Monitor**.

This is a simple beginner-friendly project for learning **IR sensing, digital input, obstacle detection, and Arduino sensor interfacing**.

---

## 🎯 Objective

- Detect nearby obstacles using an IR sensor.
- Interface an IR obstacle sensor with Arduino UNO.
- Read the sensor's digital output.
- Display obstacle status in the Serial Monitor.
- Understand basic proximity and obstacle detection.

---

## 🧰 Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| IR Obstacle Sensor Module | 1 |
| Jumper Wires | 3 |
| USB Cable | 1 |

---

## 🔍 IR Sensor Module Pins

A typical IR obstacle sensor module contains three pins:

| IR Sensor Pin | Function |
|---|---|
| VCC | Power Supply |
| GND | Ground |
| OUT | Digital Output |

The module normally contains an **IR transmitter LED** and an **IR receiver**.

---

## 🔌 Circuit Connections

| IR Sensor | Arduino UNO |
|---|---|
| VCC | 5V |
| GND | GND |
| OUT | Digital Pin 2 |

### Connection Summary

```text
IR OBSTACLE SENSOR               ARDUINO UNO
┌─────────────────┐             ┌───────────────┐
│             VCC ├────────────►│ 5V            │
│             GND ├────────────►│ GND           │
│             OUT ├────────────►│ D2            │
└─────────────────┘             └───────────────┘
```

---

## ⚙️ Working Principle

The IR obstacle sensor uses infrared light to detect nearby objects.

The **IR transmitter** continuously emits infrared radiation.

When there is no obstacle, most of the infrared light travels away from the sensor.

When an object is placed in front of the sensor, infrared light is reflected back toward the IR receiver.

The sensor module detects the reflected infrared light and changes its digital output.

The Arduino UNO reads this signal through **Digital Pin 2** and determines whether an obstacle is present.

---

## 🔄 Project Flow

```text
START
  ↓
Initialize Arduino
  ↓
Configure D2 as Input
  ↓
Read IR Sensor
  ↓
Is Obstacle Detected?
  ↓
 ┌────────────┐
 │ IR Signal  │
 └─────┬──────┘
       │
   ┌───┴───┐
  YES      NO
   ↓        ↓
OBSTACLE   CLEAR
DETECTED   PATH
   │        │
   └───┬────┘
       ↓
Display Status
       ↓
Read Sensor Again
```

---

## 🖥️ Expected Serial Monitor Output

When no object is present:

```text
Path Clear
Path Clear
Path Clear
```

When an object is placed in front of the sensor:

```text
Obstacle Detected!
Obstacle Detected!
Obstacle Detected!
```

---

## 🧪 Testing the Project

1. Connect the IR obstacle sensor to the Arduino UNO.
2. Connect Arduino UNO to the computer using USB.
3. Open the Arduino IDE.
4. Select **Arduino UNO** as the board.
5. Select the correct COM port.
6. Open the `IR_OBSTACLE_DETECTION.ino` file.
7. Upload the program.
8. Open the **Serial Monitor**.
9. Set the baud rate to **9600**.
10. Place your hand or another object in front of the IR sensor.
11. Observe the obstacle detection message.

---

## 🎚️ Adjusting Detection Distance

Most IR obstacle sensor modules contain a small **potentiometer**.

Rotate the potentiometer carefully to adjust the obstacle detection distance.

Detection performance can vary depending on:

- Object distance
- Object color
- Surface reflectivity
- Sensor sensitivity
- Ambient infrared light

---

## 📚 What You Will Learn

- Arduino UNO digital inputs
- IR sensor working principle
- Infrared reflection
- Obstacle detection
- Digital sensor interfacing
- Serial Monitor
- Basic proximity sensing

---

## 🚀 Applications

This project can be extended into:

- Obstacle Avoiding Robot
- Automatic Door System
- Object Counter
- Parking Sensor
- Smart Dustbin
- Robot Navigation System
- Industrial Object Detection
- Security Detection System

---

## 👨‍💻 Developed By

**Alpha Digitronix Solutions**

**THINK • BUILD • INNOVATE**
