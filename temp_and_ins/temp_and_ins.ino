#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
 pinMode(A3,INPUT);
 pinMode(A5,INPUT);
 lcd.begin(16,2);
 pinMode(7,OUTPUT);
 pinMode(5,OUTPUT);
}

void loop() {
  lcd.clear();
  int temp = analogRead(A3);
  temp = temp*0.4848;
  lcd.setCursor(0,0);
  lcd.print("Temperature");
  lcd.setCursor(13,0);
  lcd.print(temp);
  int ins = analogRead(A5);
  lcd.setCursor(0,1);
  lcd.print("Intensity");
  lcd.setCursor(13,1);
  lcd.print(ins);
  delay(1000);
  if ( temp > 38){
    lcd.clear();
    digitalWrite(7,1);
    lcd.print("Temp is High");
    lcd.scrollDisplayRight();
    delay(1000);
  }
  else{
    lcd.clear();
    digitalWrite(7,0);
    lcd.print("Motor is OFF");
    lcd.scrollDisplayRight();
    delay(1000);
  }
 
  if ( ins < 400){
    lcd.clear();
    digitalWrite(5,1);
    lcd.print("Light lvl Low");
    lcd.scrollDisplayRight();
    delay(1000);
  }
  else{
    lcd.clear();
    digitalWrite(5,0);
    lcd.print("LED is OFF");
    lcd.scrollDisplayRight();
    delay(1000);
  }
}
