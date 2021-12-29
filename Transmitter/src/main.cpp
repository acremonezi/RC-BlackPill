/*
Welcome!
This is a project of:
A powerful and fully customizable DIY Open Source Arduino Radio Controller
(Transmitter and Receiver) powered by BlackPill STM32F411CE microcontroller.

This is complete solution with Electronics, PCB, Software and 3D Printed Case.
All you need is basic knowledge and willpower.
Please, Enjoy it and have fun!

Sources at: https://github.com/acremonezi/RC-BlackPill/
Created at: 12th of December, 2021. (In Brazil)
Author: Alcides Cremonezi
*/

#include "main.h"             // Load Libraries

void setup() {

  Serial.begin(9600);         // Start Serial Communication  
  pinSetup();                 // Pin I/O Mode Setup
  radioSetup();               // Radio Setup

}

void loop() {

  radioComm();              // Radio Communication
  testBlink();              // Blink Code

}