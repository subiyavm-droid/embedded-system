#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
 digitalWrite(2,1);
 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(5,0);
 lcd.setCursor(0,0);
 lcd.print("RED");
 delay(1000);
 lcd.clear();
 digitalWrite(2,0);
 digitalWrite(3,1);
 digitalWrite(4,0);
 digitalWrite(5,0);
 lcd.setCursor(3,0);
 lcd.print("GREEN");
 delay(1000);
 lcd.clear();
 digitalWrite(2,0);
 digitalWrite(3,0);
 digitalWrite(4,1);
 digitalWrite(5,0);
 lcd.setCursor(6,0);
 lcd.print("YELLOW");
 delay(1000);
 lcd.clear();
 digitalWrite(2,0);
 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(5,1);
 lcd.setCursor(9,0);
 lcd.print("BLUE");
 delay(1000);
 lcd.clear();
}
