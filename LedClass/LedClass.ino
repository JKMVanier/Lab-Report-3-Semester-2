#include <Arduino.h>
#include "LED.h"

// Instantiate the LED class
LED led(13);  // Using pin 13

void setup() {
    // No additional setup required
}

void loop() {
    // Turn the LED on
    led.turnOn();
    delay(1000);  // Wait for 1 second

    // Turn the LED off
    led.turnOff();
    delay(1000);  // Wait for 1 second

   
