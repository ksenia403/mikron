#include <Servo.h>
int i = 0;
Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (i; i < 180; i+=1) {
    myservo.write(i);
    delay(10);
  }
  for (i; i > 0; i-=1) {
    myservo.write(i);
    delay(10);}
}
