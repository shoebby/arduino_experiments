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
  } 
  
  if (value>=750 && value<1000) {
    analogWrite(11, brightness);
  }

  if (value>=500 && value<750) {
    analogWrite(10, brightness);
  }

  if (value>=250 && value<500) {
    analogWrite(9, brightness);
  }

  if (value>=0 && value<250) {
    analogWrite(6, brightness);
  }
}
