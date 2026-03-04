void setup() {
 pinMode(2,INPUT);
 pinMode(3,OUTPUT);
}

void loop() {
  int swt=digitalRead(2);
  if(swt==1)
{
  digitalWrite(3,1);
}
 else
{
  digitalWrite(3,0);
}
}

