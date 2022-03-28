#include <Arduino.h>

//D2 per pin mapping is PD1 pin
// see pins_arduino.h
#define LED_TEST 2

void setup(){
    pinMode(LED_TEST, OUTPUT); 
}
void loop(){
    digitalWrite(LED_TEST, HIGH);
    delay(1000);
    digitalWrite(LED_TEST, LOW);
    delay(1000);
}
