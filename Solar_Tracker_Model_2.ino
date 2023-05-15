#include <Servo.h>
Servo X_Servo;
Servo Y_Servo;

//0-110
//0-160

short X_Axis = 0;
short Y_Axis = 0;
int Threshold = 700;

void setup() {
  X_Servo.attach(3);
  Y_Servo.attach(5);
  delay(1000);
  Y_Servo.write(55);
  X_Servo.write(85);
  delay(2000);
}

void loop() {
  if(analogRead(A0) > Threshold){
    X_Servo.write(85);
    Y_Servo.write(0);
    delay(1000);
  }
  else if(analogRead(A2) > Threshold){
    X_Servo.write(85);
    Y_Servo.write(110);
    delay(1000);
  }
  else if(analogRead(A1) > Threshold){
    X_Servo.write(0);
    Y_Servo.write(55);
    delay(1000);
  }
  else if(analogRead(A3) > Threshold){
    X_Servo.write(160);
    Y_Servo.write(55);
    delay(1000);
  }
}
