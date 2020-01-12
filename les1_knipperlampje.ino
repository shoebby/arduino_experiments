void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  for (int i=0;i<255;i++) {
    analogWrite(3, i);
    delay(5);
  }

  for (int i=0;i<255;i++) {
    analogWrite(5, i);
    delay(5);
  }

    for (int i=0;i<255;i++) {
    analogWrite(6, i);
    delay(5);
  }

    for (int i=0;i<255;i++) {
    analogWrite(9, i);
    delay(5);
  }
  
  for (int i=255;i>0;i--) {
    analogWrite(3, i);
    analogWrite(5, i);
    analogWrite(6, i);
    analogWrite(9, i);
    delay(5);
  }

  delay(200);
}
