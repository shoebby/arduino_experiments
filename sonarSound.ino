#include <NewTone.h>
#include <NewPing.h>



NewPing sonar(10,11);

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  delay(200);

  int distance = sonar.ping_cm();
  boolean sound = false;
  
  Serial.print("Afstand=");
  Serial.println(distance); 
  
  if (distance<10) {
    NewTone(8,1000);
    delay(100);
    noNewTone(8);
    delay(20);
  } else {
    NewTone(8,250);
    delay(100);
    noNewTone(8);
    delay(1000);
  }
}
