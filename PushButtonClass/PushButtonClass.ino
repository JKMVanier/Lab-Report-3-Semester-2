#include <Arduino.h>
#include "PushButton.h"


PushButton button(2);  // Using pin 2

void setup() {
    Serial.begin(9600);
}

void loop() {
    // Updates the state of the button
    button.update();

    // Checks if the button is currently pressed
    if (button.isPressed()) {
        Serial.println("Button is pressed.");
    }

    // Gets the number of button presses
    int pressCount = button.getPressCount();
    Serial.print("Press count: ");
    Serial.println(pressCount);

}
