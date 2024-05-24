Traffic Light LED System with Arduino
This repository contains the code and instructions to create a simple traffic light LED system using an Arduino. This project is ideal for beginners who want to learn about basic electronics and Arduino programming.

Table of Contents
Introduction
Components Required
Circuit Diagram
How It Works

Introduction:
This project simulates a traffic light using three LEDs (red, yellow, and green) controlled by an Arduino. The LEDs will light up in sequence to mimic the behavior of a real traffic light.

Components required:
1 Arduino Uno(board)
1 Red LED
1 Yellow LED
1 Green LED
Jumper wires

Circuit Diagram:
Connect the positive leg (longer leg) of the Red LED to pin 8 on the Arduino.
Connect the positive leg of the Yellow LED to pin 19 on the Arduino.
Connect the positive leg of the Green LED to pin 13 on the Arduino.
Connect all the negative legs (shorter legs) of the LEDs to the ground (GND) on the Arduino.

How It Works:
The code defines three pins (8,9,13) for the red, yellow, and green LEDs.
In the setup function, these pins are set as outputs.
The loop function controls the LEDs by turning each one on and off with specific delays to mimic a traffic light cycle:
Red LED on for 1 seconds
Yellow LED on for 1 seconds
Green LED on for 1 seconds
