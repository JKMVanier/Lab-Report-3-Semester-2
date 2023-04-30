#ifndef LED_H
#define LED_H

class LED {
private:
    const int pin;
    bool isOn;

public:
    LED(int pin);
    void turnOn();
    void turnOff();
    
};

#endif  // LED_H
