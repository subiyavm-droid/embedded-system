void setup()  {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(3, 1);
  delay(1000);
  digitalWrite(3, 0);
  delay(1000);
  digitalWrite(4, 1);
  delay(1000);
  digitalWrite(4, 0);
  delay(1000);
  digitalWrite(5, 1);
  delay(1000);
  digitalWrite(5, 0);
  delay(1000);
  digitalWrite(6, 1);
  delay(1000);
  digitalWrite(6, 0);
  delay(1000);
}

