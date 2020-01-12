void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (4,INPUT);
  pinMode (11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(4);
  Serial.println(buttonState);

  digitalWrite(11, buttonState);
}
