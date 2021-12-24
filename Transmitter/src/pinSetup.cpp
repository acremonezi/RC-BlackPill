#include <Arduino.h>      // Main Arduino Library
#include "pinMap.h"       // Pin Map Setup
#include "pinSetup.h"     // Pin I/O Mode Setup

// Pin I/O Mode Setup
void pinSetup() {

    // Define the Analog Inputs
    // ----------------------------------------------
    pinMode(Joystick1x, INPUT);                 // Joystick 1 eixo X
    pinMode(Joystick1y, INPUT);                 // Joystick 1 eixo Y
    pinMode(Joystick2x, INPUT);                 // Joystick 2 eixo X
    pinMode(Joystick2y, INPUT);                 // Joystick 2 eixo Y

    // Define the Digital Inputs
    // ----------------------------------------------
    //pinMode(Button1, INPUT_PULLUP);           // Button
  
  
    // Define the Digital Outputs
    // ----------------------------------------------
    pinMode(LED_BUILTIN, OUTPUT);               // Built in LED
}