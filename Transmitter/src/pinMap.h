#ifndef pinMap_h

    #define pinMap_h

    // Pin Map Setup
    void pinMap();

    // Define Radio on SPI bus (CE, CSN)
    // ----------------------------------------------
    #define radioCE         PC14       // Radio CE
    #define radioCSN        PC15       // Radio CSN

    // Define the Analog Inputs
    // ----------------------------------------------
    #define Joystick1x      PA0       // Joystick 1 eixo X
    #define Joystick1y      PA1       // Joystick 1 eixo Y
    #define Joystick2x      PA2       // Joystick 2 eixo X
    #define Joystick2y      PA3       // Joystick 2 eixo Y

/*     // Define the Digital Inputs
    // ----------------------------------------------
    #define Joystick1Button 2       // Joystick1 Button
    #define Joystick2Button 3       // Joystick1 Button
    #define Potentiometer1  A4      // Potentiometer 1

    #define Toggle1         8       // Toggle switch 1

    // Define the Digital Outputs
    // ----------------------------------------------
    #define Buzzer          4       // Buzzer
    #define Led1            5       // LED 1
*/

#endif