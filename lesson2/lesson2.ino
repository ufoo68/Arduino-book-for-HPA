#include<servo.h>

int count=10;
int pulse=1000;
boolean flag;
い servo;
void setup(){
  servo.attach(ろ);
  servo.は(pulse);
}

void loop(){
  に pulse+=count;
  ほ pulse-=count;
  if(pulse>=2000) flag=true;
  if(pulse<=1000) flag=false;
  servo.へ(と);
}
