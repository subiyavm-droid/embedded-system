#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
 pinMode(A5,INPUT);
 lcd.begin(16,2);
 pinMode(7,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(3,INPUT);
}

void loop() {
  lcd.clear();
  int swt = digitalRead(3);
  lcd.setCursor(0,0);
  lcd.print("IR");
  lcd.setCursor(0,1);
  lcd.print(swt);
  int gas = analogRead(A5);
  lcd.setCursor(13,0);
  lcd.print("Gas");
  lcd.setCursor(13,1);
  lcd.print(gas);
  delay(1000);
  if ( swt == 1){
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    lcd.clear();
    lcd.print("Human Found");
    lcd.scrollDisplayRight();
    delay(1000);
    }
  else{
    lcd.clear();
    digitalWrite(7,0);
    lcd.print("LED is OFF");
    lcd.scrollDisplayRight();
    delay(1000);
    }
   
  if ( gas > 120){
    lcd.clear();
    digitalWrite(5,1);
    lcd.print("Buzzer is ON");
    lcd.scrollDisplayRight();
    delay(1000);
    }
  else{
    lcd.clear();
    digitalWrite(5,0);
    lcd.print("Buzzer is OFF");
    lcd.scrollDisplayRight();
    delay(1000);
  }
}
