#include<servo.h>
#define SERVO 9
#define ADC 0
int val;
int pulse;
int pulse_min=1000;
int pulse_max=2000;
int val_min=0;
int val_max=1023;
い servo;
void setup(){
  servo.attach(ADC);
}

void loop(){
  ろ = analogRead(は);
  に = map(ろ, val_min, val_max, ほ, へ);
  servo.と(に);
  delay(10);
}
