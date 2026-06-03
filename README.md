## 💡 LED Blinking Pattern using 8051 Microcontroller

An embedded systems mini project developed using Embedded C in Keil uVision and simulated in Proteus Design Suite.

## 🚀 Project Overview

This project demonstrates LED interfacing with the 8051 microcontroller. Eight LEDs are connected to the microcontroller ports and are programmed to blink in an alternating pattern using Embedded C.

The project was created to understand:

-> 8051 port operations
-> LED interfacing
-> Delay generation in Embedded C
-> Keil to Proteus simulation workflow

## 🛠️ Tools and Technologies

-> Embedded C
-> Keil uVision
-> Proteus Design Suite
-> AT89C51 / 8051 Microcontroller

## 📂 Repository Contents

-> `led.c` – Source code
-> `tech.hex` – Compiled output file
-> `LED BLINKING.pdsprj` – Proteus simulation project

## ⚙️ Working Principle

The LEDs are connected to Ports P1 and P2 of the 8051 microcontroller.
Two LED patterns are generated:

**Pattern 1**
-> LEDs 1, 3, 5, 7 ON
-> LEDs 2, 4, 6, 8 OFF

**Pattern 2**
-> LEDs 2, 4, 6, 8 ON
-> LEDs 1, 3, 5, 7 OFF

These patterns alternate continuously, creating a blinking effect.

## 🎯 Learning Outcomes

* Basic Embedded C programming
* Microcontroller pin control
* LED interfacing techniques
* Circuit simulation using Proteus
* GitHub project documentation

