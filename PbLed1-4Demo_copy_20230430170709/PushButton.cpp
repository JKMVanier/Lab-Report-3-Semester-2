#include "PushButton.h"

PushButton::PushButton(int pin) : pin(pin) {
    pinMode(pin, INPUT_PULLUP);
    lastState = digitalRead(pin);
    currentState = lastState;
    pressed = false;
    pressCount = 0;
}

void PushButton::update() {

    currentState = digitalRead(pin);

    if (currentState != lastState && currentState == LOW) {
        pressed = true;
        pressCount++;
    } else {
        pressed = false;
    }

    lastState = currentState;
}

bool PushButton::isPressed() const {
    return pressed;
}

 int PushButton::getPressCount() const {
    return pressCount;
}
