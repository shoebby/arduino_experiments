#include <Servo.h>

Servo servo1;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  //Serial.println(value);
  int servoPos = map(value, 0, 1023, 0, 180);
  servo1.write(servoPos);
  Serial.println(servoPos);
  delay(100);
}
