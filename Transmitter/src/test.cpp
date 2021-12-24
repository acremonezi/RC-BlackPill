#include <Arduino.h>      // Main Arduino Library
#include "pinMap.h"       // Pin Map Setup
#include "pinSetup.h"     // Pin I/O Mode Setup
#include "test.h"         // Test Codes

// Simple Blink for LED_BUILTIN.
void testBlink() {  
   
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(100);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(100);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  

}