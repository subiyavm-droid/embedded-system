#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
 pinMode(A5,INPUT);
 pinMode(A3,INPUT);
 pinMode(A1,INPUT);
 lcd.begin(16,2);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(2,OUTPUT);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SMART HOME");
  lcd.setCursor(0,1);
  lcd.print("SYSTEM");
  delay(1000);
  lcd.clear();
  int ins = analogRead(A5);
  lcd.setCursor(0,0);
  lcd.print("LDR");
  lcd.setCursor(0,1);
  lcd.print(ins);
  int temp = analogRead(A3);
  temp= temp*0.4848;
  lcd.setCursor(4,0);
  lcd.print("TEMP");
  lcd.setCursor(4,1);
  lcd.print(temp);
  int gas = analogRead(A1);
  lcd.setCursor(8,0);
  lcd.print("GAS");
  lcd.setCursor(8,1);
  lcd.print(gas);
  delay(2000);
  if(ins<400)
  {
    digitalWrite(3,1);
    digitalWrite(2,0);
    delay(1000);
    digitalWrite(3,0);
    digitalWrite(2,1);
    delay(1000);
    }
    else
    {
      digitalWrite(3,0);
      digitalWrite(2,0);
    }
   if(temp>38)
   {
    digitalWrite(5,1);
    digitalWrite(4,1);
    delay(1000);
   }
  else
  {
    digitalWrite(5,0);
    digitalWrite(4,0);
    delay(1000);
  }
  if(gas>160)
  {
    digitalWrite(7,1);
    digitalWrite(6,1);
    delay(1000);
  }
  else
  {
    digitalWrite(7,0);
    digitalWrite(6,0);
    delay(1000);
  }
}
  
  
  
  
   
