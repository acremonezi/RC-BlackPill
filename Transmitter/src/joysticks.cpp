#include <Arduino.h>          // Main Arduino Library
#include "pinMap.h"           // Pin Map Setup
#include "pinSetup.h"         // Pin I/O Mode Setup
#include "joysticks.h"        // Joysticks Positions

// Define Global Variables
int Joystick1xValue = 0;
int Joystick1yValue = 0;
int Joystick2xValue = 0;
int Joystick2yValue = 0;

long Joystick1xValueMapped = 0;
long Joystick1yValueMapped = 0;
long Joystick2xValueMapped = 0;
long Joystick2yValueMapped = 0;


// Read Joysticks Positions
void joysticksRead() {

  // Yaw (Left and Right)
  Joystick1xValue = analogRead(Joystick1x);
  // Thottle (Up and Down)
  Joystick1yValue = analogRead(Joystick1y);
  // Roll (Left and Rigt)
  Joystick2xValue = analogRead(Joystick2x);
  // Pitch (Down and Up)
  Joystick2yValue = analogRead(Joystick2y);

  // Yaw (Left and Right)
  Joystick1xValueMapped = map(Joystick1xValue, 0, 1023, 0, 255);
  // Thottle (Up and Down)
  Joystick1yValueMapped = map(Joystick1yValue, 0, 1023, 0, 255);
  // Roll (Left and Rigt)
  Joystick2xValueMapped = map(Joystick2xValue, 0, 1023, 0, 255);
  // Pitch (Down and Up)
  Joystick2yValueMapped = map(Joystick2yValue, 0, 1023, 0, 255);

}


void joysticksReset() {

  Joystick1xValue = 127;
  Joystick1yValue = 127;
  Joystick2xValue = 127;
  Joystick2yValue = 127;

}


void joysticksPrint() {

  Serial.print("J1 -- Yaw  | Thottle -- ");
  Serial.print("X: ");
  Serial.print(Joystick1xValue);
  Serial.print(" | Y: ");
  Serial.print(Joystick1yValue);

  Serial.print(" -- Xm: ");
  Serial.print(Joystick1xValueMapped);
  Serial.print(" | Ym: ");
  Serial.println(Joystick1yValueMapped);

  Serial.print("J2 -- Roll | Pitch   -- ");
  Serial.print("X: ");
  Serial.print(Joystick2xValue);
  Serial.print(" | Y: ");
  Serial.print(Joystick2yValue);

  Serial.print(" -- Xm: ");
  Serial.print(Joystick2xValueMapped);
  Serial.print(" | Ym: ");
  Serial.println(Joystick2yValueMapped);

  delay(500);

}