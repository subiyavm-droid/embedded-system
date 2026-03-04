#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
 pinMode(A5,INPUT);
 lcd.begin(16,2);
 pinMode(7,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(1,INPUT);
}

void loop() {
  lcd.clear();
  int swt = digitalRead(1);
  lcd.setCursor(0,0);
  lcd.print("VEHICLE SERVICE ");
  lcd.setCursor(0,1);
  lcd.print("TESTING");
  delay(1000);
  if ( swt == 1){
    lcd.clear();
    lcd.print("Helmet Weared");
    lcd.scrollDisplayRight();
    delay(1000);
    digitalWrite(3,1);
    delay(500);
    }
  else{
    lcd.clear();
    digitalWrite(7,0);
    lcd.setCursor(0,0);
    lcd.print("Helmet not weared");
    lcd.scrollDisplayRight();
    delay(1000);
    digitalWrite(3,0);
    delay(500);
    }
  int ad = analogRead(A5);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Alcohol Val");
  lcd.setCursor(12,0);
  lcd.print(ad);
  delay(1000);
  if ( ad > 120){
    lcd.clear();
    digitalWrite(5,1);
    lcd.print("Buzzer is ON");
    lcd.scrollDisplayRight();
    delay(1000);
    digitalWrite(7,1);
    delay(300);
    digitalWrite(7,0);
    delay(300);
    }
  else{
    lcd.clear();
    digitalWrite(5,0);
    lcd.setCursor(0,0);
    lcd.print("Alcohol not consumed");
    lcd.scrollDisplayRight();
    delay(1000);
  }
}
