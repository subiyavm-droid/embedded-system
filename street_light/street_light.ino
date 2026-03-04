#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
 pinMode(A5,INPUT);
 lcd.begin(16,2);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(3,OUTPUT);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("WELCOME TO SMART");
  lcd.setCursor(0,1);
  lcd.print("STREET LIGHT SYSTEM");
  delay(1000);
  lcd.clear();
  int ins = analogRead(A5);
  if(ins<180)
  {
    digitalWrite(7,1);
    digitalWrite(6,1);
    digitalWrite(5,1);
    digitalWrite(4,1);
    digitalWrite(3,1);
  }
  else
  {
    digitalWrite(7,0);
    digitalWrite(6,0);
    digitalWrite(5,0);
    digitalWrite(4,0);
    digitalWrite(3,0);
  }
  }
  
