void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(3,1);
  digitalWrite(5,1);
  digitalWrite(7,1);
  delay(1000);
  digitalWrite(4,0);
  digitalWrite(6,0);
  digitalWrite(8,0);
  delay(1000);
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(7,0);
  delay(1000);
  digitalWrite(4,1);
  digitalWrite(6,1);
  digitalWrite(8,1);
  delay(1000);
  digitalWrite(4,0);
  digitalWrite(6,0);
  digitalWrite(8,0);
  delay(1000);
}
