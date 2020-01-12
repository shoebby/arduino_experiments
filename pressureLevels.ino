void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (A0, INPUT);
  pinMode (11, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  Serial.println(value);

  int brightness = map(value, 1023, 0, 0, 255);

  if (value>=1000) {
    analogWrite(11, 0);
    analogWrite(10, 0);
    analogWrite(9, 0);
    analogWrite(6, 0);
  } else {
    analogWrite(11, brightness);
    analogWrite(10, brightness);
    analogWrite(9, brightness);
    analogWrite(6, brightness);
  }
}
