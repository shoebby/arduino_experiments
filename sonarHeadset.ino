#include <NewTone.h>
#include <NewPing.h>

NewPing sonar(10,11);

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  delay(200);

  int value = analogRead(A0);
  int distance = sonar.ping_cm();
  int frequency = map(distance, 0, 100, 1500, 250);
  int toneDelay = map(distance, 0, 100, 100, 1000);
  
  Serial.print("Afstand=");
  Serial.println(distance);
  Serial.println(value);

  if (value > 100) {

    if (distance == 0) {
      noNewTone(8);
    } else {
    NewTone(8, frequency);
    delay(toneDelay);
    noNewTone(8);
    }
  }
}
