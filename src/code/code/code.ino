#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

int lm35Pin = A0; 
LiquidCrystal lcd(0, 1, 8, 9, 10, 11);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("   Heat  ");
  lcd.setCursor(0,1);
  lcd.println(" Calculating ");
  delay(5000);


}

void loop() {
  int celsius_value = (5.0 * analogRead(lm35Pin) * 100.0) / 6000;
  lcd.clear(); 
  lcd.setBacklight(LOW);
  lcd.setCursor(0,0);
  lcd.setCursor(0,1);
  lcd.print(" Heat: "); 
  lcd.print(celsius_value);
  lcd.print((char)223);
  lcd.print("C");
  delay(2000);
}
