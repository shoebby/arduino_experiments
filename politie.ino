void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  analogWrite(5, 255);
  analogWrite(9, 255);
  delay(20);
  analogWrite(3, 0);
  analogWrite(6, 0);
  delay(500);
  analogWrite(5, 0);
  analogWrite(9, 0);
  delay(20);
  analogWrite(3, 255);
  analogWrite(6, 255);
  delay(500);
}
