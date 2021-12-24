#ifndef joysticks_h

    #define joysticks_h

    // Define Global Variables
    extern int Joystick1xValue;
    extern int Joystick1yValue;
    extern int Joystick2xValue;
    extern int Joystick2yValue;

    extern long Joystick1xValueMapped;
    extern long Joystick1yValueMapped;
    extern long Joystick2xValueMapped;
    extern long Joystick2yValueMapped;

    // Read Joysticks Positions
    void joysticksRead();

    // Print Joysticks Positions
    void joysticksPrint();
    
    // Reset Joysticks Positions
    void joysticksReset();

#endif