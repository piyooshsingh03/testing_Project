//This is only for testing pepose and this reposatry shared with ashish
#include <Arduino.h>
#define led_pin 2
// put function declarations here:
void LEDState(int state)
{
  digitalWrite(led_pin,state);
  Serial.println("Led State: "+String(state));
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
}
void loop() {
  LEDState(LOW);
  delay(500);
  LEDState(HIGH);
  delay(500);
}
