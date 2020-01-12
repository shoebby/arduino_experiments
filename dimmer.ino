void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  Serial.println(value);

  int brightness = map(value, 0, 1023, 0, 255);
  analogWrite(11, brightness);
}
