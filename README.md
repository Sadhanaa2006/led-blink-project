💡 **LED Blinking Pattern using 8051 Microcontroller**  
An embedded systems mini project developed using Embedded C in Keil uVision and simulated in Proteus Design Suite.

🚀 **Project Overview**  
This project demonstrates LED interfacing with the 8051 microcontroller. Eight LEDs are connected to the microcontroller ports and are programmed to blink in an alternating pattern using Embedded C.

The project was created to understand:

-> 8051 port operations  
-> LED interfacing  
-> Delay generation in Embedded C  
-> Bitwise/hex pattern output  
-> Keil to Proteus simulation workflow  

🛠️ **Tools and Technologies**  
-> Embedded C  
-> Keil uVision  
-> Proteus Design Suite  
-> AT89C51 / 8051 Microcontroller  

📂 **Repository Contents**  
-> led.c – Source code  
-> tech.hex – Compiled output file  
-> LED BLINKING.pdsprj – Proteus simulation project  

⚙️ **Working Principle**  
The LEDs are connected to Port 1 (P1) and Port 2 (P2) of the 8051 microcontroller.

Two patterns are generated:

-> Pattern 1 → 0xAA (10101010) → LEDs 1,3,5,7 ON  
-> Pattern 2 → 0x55 (01010101) → LEDs 2,4,6,8 ON  

These patterns alternate continuously, creating a blinking effect.

🎯 **Learning Outcomes**  
-> Basic Embedded C programming  
-> Microcontroller port control  
-> LED interfacing techniques  
-> Bitwise pattern generation using hex values  
-> Circuit simulation using Proteus  
-> GitHub project documentation  

