#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
 pinMode(A4,INPUT);
 lcd.begin(16,2);
}

void loop() {
  int temp = analogRead(A4);
  temp = temp*0.4848;
  lcd.setCursor(0,0);
  lcd.print("Temperature");
  lcd.setCursor(13,0);
  lcd.print(temp);

}
