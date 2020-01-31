#include "dht.h"
#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup(){
 Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
 
}//end "setup()"
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
//Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Temp= ");
  lcd.print(DHT.temperature);
  lcd.print("^C");
  delay(1000);
}
