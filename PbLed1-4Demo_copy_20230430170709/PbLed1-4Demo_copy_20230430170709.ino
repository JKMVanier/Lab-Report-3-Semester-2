#include <Arduino.h>
#include "PushButton.h"
#include "LED.h"

PushButton button(2);  // Using pin 2
LED led1(3);  
LED led2(4);  
LED led3(5);  
LED led4(6);  

void setup() {

}

void loop() {

 button.update();

    // Checks if the button is currently pressed
    if (button.isPressed()) {
        Serial.println("Button is pressed.");
    }

    // Gets the number of button presses
    int pressCount = button.getPressCount();

switch (pressCount) {
    case 0:
      led1.turnOn();
      led2.turnOff();
      led3.turnOff();
      led4.turnOff();
      break;
    case 1:
      led1.turnOff();
      led2.turnOn();
      led3.turnOff();
      led4.turnOff();
      break;
    case 2:
      led1.turnOff();
      led2.turnOff();
      led3.turnOn();
      led4.turnOff();
      break;
    case 3:
      led1.turnOff();
      led2.turnOff();
      led3.turnOff();
      led4.turnOn();
      break;
    default:
      led1.turnOff();
      led2.turnOff();
      led3.turnOff();
      led4.turnOff();
      pressCount = 0;
      break;
}

  