#include "LED.h"
#include <Arduino.h>

LED::LED(int pin) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}

void LED::turnOn() {
    digitalWrite(pin, HIGH);
    isOn = true;
}

void LED::turnOff() {
    digitalWrite(pin, LOW);
    isOn = false;
}

}
