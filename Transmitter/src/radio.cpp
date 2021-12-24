#include <Arduino.h>        // Main Arduino Library
#include "pinMap.h"         // Pin Map Setup
#include "pinSetup.h"       // Pin I/O Mode Setup
#include "radioSetup.h"       // Radio Setup
#include "radio.h"            // Radio Communication

#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>

// Radio Communication
void radioComm() {
  
  // Send Data
  delay(5);
  radio.stopListening();

      //char textTest2[] = "Test OK!";
      //const char textTransmitter[] = textTest2;
      
      ///radio.write(&textTransmitter, sizeof(textTransmitter));
      ///delay(5);

  //radio.write(&TransmitterDataPackage, sizeof(TransmitterDataPackage));
  //Serial.print(TransmitterDataPackage.Joystick1yValue);
  //Serial.println(TransmitterDataPackage.Joystick2xValue);
  //delay(1000);

  // Receive Data
  delay(5);
  radio.startListening();
  //while (!radio.available());
  //radio.read(&ReceiverDataPackage, sizeof(ReceiverDataPackage));
  

}


// Radio Test
void radioTest() {

    delay(5);
    radio.stopListening();

      const char textTransmitter[] = "PIng from Transmitter !!!";
      radio.write(&textTransmitter, sizeof(textTransmitter));
      delay(5);


    delay(5);
    radio.startListening();

      if ( radio.available() ) {
        char textReceiver[32] = "";
        radio.read(&textReceiver, sizeof(textReceiver));
        Serial.println(textReceiver);
        delay(500);
      }

}