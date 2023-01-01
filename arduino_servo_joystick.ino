#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
 pinMode("A0",INPUT);
 pinMode("A1",INPUT);
 pinMode(8, INPUT);
 pinMode(10,OUTPUT);
 servo.attach(8);
 servo.write(10);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (analogRead(A0) < 480 || analogRead(A0) > 550) {
    digitalWrite(10,HIGH);
    servo.write(analogRead(A1)/5.68888888889);
  }
  digitalWrite(10,LOW);
   while (analogRead(A1) < 480 || analogRead(A1) > 550) {
     servo.write(analogRead(A1)/5.68888888889);
   }
}
 