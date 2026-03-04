void setup()
{
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
}

void loop()
{
  int swt1=digitalRead(0);
  int swt2=digitalRead(1);
  if(swt1==0&&swt2==0)
  {
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    }
    else if(swt1==0&&swt2==1)
    {
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
      delay(500);
      digitalWrite(6,0);
      digitalWrite(7,0);
      digitalWrite(8,0);
      digitalWrite(9,0);
      delay(1000);
    }
    else if(swt1==1&&swt2==0)
    {
      digitalWrite(6,1);
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(9,1);
      delay(500);
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      delay(1000);
    }
     else if(swt1==1&&swt2==1)
     {
      digitalWrite(2,1);
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
      delay(500);
      digitalWrite(6,1);
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(9,1);
      delay(1000);
      }
  

}
