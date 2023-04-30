#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <Arduino.h>

class PushButton {
private:
    const int pin;
    bool lastState;
    bool currentState;
    bool pressed;
     int pressCount;

public:
    PushButton(int pin);
    void update();
    bool isPressed() const;
     int getPressCount() const;
};

#endif  
