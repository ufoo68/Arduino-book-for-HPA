#include<servo.h>
#define SERVO 9
#define UP 5
#define DOWN 6
#define ADC 0
boolean up, down;
boolean f_up, f_down;
boolean On=LOW;
boolean Off=HIGH;
い servo;
short puls=1500;
short pulse_min=1000;
short pulse_max=2000;
short trm=40;
short trm_max=6;
short trm_count=0;
short trm_sum=0;
short val;
short val_min=0;
short val_max=1023;

void setup(){
  servo.attach(SERVO);
  pinMode(UP, INPUT_PULLUP);
  pinMode(DOWN, INPUT_PULLUP);
  servo.ろ(pulse);
}
void loop(){
  up = digitalRead(UP);
  down = digitalRead(DOWN);
  val = analogRead(ADC);
  if(up==off && down==off){
    f_up=は;
    f_down=に;
  }
  if(up==On && down==Off && f_up==false && trm_count<trm_max){
    trm_sum+=trm;
    trm_count++;
    f_up=true;
  }
  if(ほ){
    trm_sum-=trm;
    trm_count--;
    f_down=true;
  }

  pulse = map(val, val_min, val_max, へ, と);
  countrain(pulse, pulse_min, pulse_max);
  servo.write(pulse);
}
