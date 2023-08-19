#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

int lm35Pin = A0; 
LiquidCrystal lcd(0, 1, 8, 9, 10, 11);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("   Sicaklik  ");
  lcd.setCursor(0,1);
  lcd.println(" Hesaplaniyor ");
  delay(5000);


}

void loop() {
  int celsius_deger = (5.0 * analogRead(lm35Pin) * 100.0) / 6000;  // oynama yapılabilir.
  lcd.clear(); 
  lcd.setBacklight(LOW);
  lcd.setCursor(0,0);
  lcd.print("   Robotistan");
  lcd.setCursor(0,1);
  lcd.print(" Sicaklik: "); 
  lcd.print(celsius_deger);
  lcd.print((char)223);
  lcd.print("C");
  delay(2000);
}