#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Setează pinii pentru DS18B20 și LCD
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2); // Adresa I2C poate varia

void setup() {
  // Pornim comunicarea cu senzorul de temperatură
  sensors.begin();
  
  // Pornim afișajul LCD
  lcd.begin(16, 2); // Inițializăm LCD-ul cu 16 coloane și 2 rânduri
  lcd.backlight();

  // Inițializăm afișajul LCD
  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
}

void loop() {
  // Cerem senzorului să măsoare temperatura
  sensors.requestTemperatures();
  
  // Citim temperatura
  float temperatureC = sensors.getTempCByIndex(0);
  
  // Afișăm temperatura pe LCD
  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print(" C");

  // Așteptăm 1 secundă înainte de următoarea citire
  delay(1000);
}
