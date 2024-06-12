// # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Pre - PRE Setup ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ # //
#include <LiquidCrystal.h> // Imports LiquidCrystal Library
unsigned int ADCValue; // Creates a blank numerical variable that is going to Measurement of how far in [mm] something is from the ultrasonic sensor
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int buzzer = 13; //buzzer to arduino pin 13
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Pre Setup ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ # //
void setup() { // Runs the following once
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  lcd.begin(16, 2); // Starts the LCD, sets the dimensions (16px by 2 px)
  lcd.display(); // Turns on the display
  lcd.clear(); // Clears the display

  Serial.begin(9600); // Opens serial, sets transfer speed at 9600 bps (9.6 kbps)

  for(int pinNumber = 6; pinNumber<8; pinNumber++){ // Creates a pinMode for the LEDS that are connected from port 2 to port 4
    pinMode(pinNumber, OUTPUT); // 
    digitalWrite(pinNumber, LOW); // (*) Sets LEDS to LOW (meaning off)
  }
    digitalWrite(6, LOW); // (*)
    digitalWrite(7, LOW); // (*)
}

// # ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Main Loop ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ # //
void loop() { // Loops the following
  noTone(buzzer);     // Stop sound...

  lcd.clear(); // Clears the display
  ADCValue = analogRead(0); // Ties the measurement variable to the analog port (A0). The ultra-sonic sensor sends its measurements to the A0 pin and it relays it to the ADCValue

  if (ADCValue < 900) { // if something is less than 900mm away from the ultrasonic sensor (Alarm Triggered) 
    tone(buzzer, 1500);
    lcd.setCursor(0, 0);
    lcd.print("  ALERT  "); // Displays on the LCD
    lcd.setCursor(0, 1);
    lcd.print("PERSON DETECTED "); // Displays on the LCD
    digitalWrite(6, LOW); // Sets LED to HIGH brightness
    digitalWrite(7, HIGH); // Sets LED to HIGH brightness
    delay(150); // Weights 0.150 of a second (150 miliseconds)
    digitalWrite(6, HIGH); // (*)
    digitalWrite(7, LOW); // (*)
    tone(buzzer, 1250);

  } else if (ADCValue > 900) { // If something is more than 900mm away from the ultrasonic sensor (Armed)
      noTone(buzzer);     // Stop sound...

      digitalWrite(6, HIGH); // (*)
      digitalWrite(7, HIGH); // (*)
      lcd.setCursor(0, 0);
      lcd.print("    No Person   "); // Displays on the LCD
    lcd.setCursor(0, 1);
    lcd.print("    Detected    "); // Displays on the LCD
  }
  delay(150); // Weights 0.150 of a second (150 miliseconds)
}
