#include "radioSetup.h"


//Radio on SPI bus (CE, CSN)
RF24 radio(radioCE, radioCSN);


// Radio Address
const byte addresses[][6] = {"00001", "00002"}; // Bidiretional


// Radio Setup
void radioSetup() {
 
    radio.begin();
    radio.openWritingPipe(addresses[1]);    // 00002 Bidiretional
    radio.openReadingPipe(1, addresses[0]); // 00001 Bidiretional
    radio.setPALevel(RF24_PA_MIN);

}
