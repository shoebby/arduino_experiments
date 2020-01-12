#include <NewPing.h>

NewPing sonar(10, 11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(200);

  int distance = sonar.ping_cm();

  Serial.print("Afstand=");
  Serial.println(distance);

  if (distance<20) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
}
