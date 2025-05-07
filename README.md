# Real-Time-Dual-Axis-Solar-Tracker

A Dual Axis Solar Tracker that automatically aligns a solar panel with the sun in both horizontal (azimuth) and vertical (elevation) directions to maximize solar energy capture throughout the day.

# Features

- Automatically tracks the sun in two axes
- Maximizes solar panel efficiency
- Uses light-dependent resistors (LDRs) for sun position detection
- Simple, low-cost implementation using Arduino and servo motors

# Tech Stack

- Microcontroller: Arduino Uno or Nano
- Sensors: Light Dependent Resistors (LDRs)
- Actuators: Servo Motors
- Programming Language: C/C++ (Arduino IDE)

# Hardware Requirements

- 1x Arduino Uno/Nano  
- 4x LDRs  
- 2x Servo motors (for X and Y axis movement)  
- 10kΩ resistors (for LDR voltage divider)  
- Solar panel (or dummy panel for demo)  
- Breadboard and jumper wires  
- Mount for servo + panel

# Software Requirements

- Arduino IDE

# How It Works

1. Four LDRs are positioned at the corners of the panel to detect sunlight intensity.
2. The Arduino continuously reads the LDR values and calculates the difference between opposite pairs.
3. Depending on the light intensity difference, it adjusts the servos to reorient the panel towards the brightest direction (i.e., the sun).
4. This dual-axis mechanism ensures the panel is always optimally aligned for maximum solar energy capture.
