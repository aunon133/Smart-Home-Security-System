#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // initialize the library with the numbers of the interface pins

int gasSensorPin = A0; 
int flameSensorPin = A1;
int irSensorPin = A2;
int buzzerPin = 13; 
int greenLedPin = 8; 
int redLedPin = 9; 

int gasSensorValue; // 
int flameSensorValue;
int irSensorValue;
int gasSensorThreshold = 200;  // SET THE VALUE ACCORDING TO YOU
int flameSensorThreshold = 300;  // SET THE VALUE ACCORDING TO YOU
int irSensorThreshold = 400;

void setup(){ 
  pinMode(gasSensorPin, INPUT); 
  pinMode(flameSensorPin, INPUT); 
  pinMode(buzzerPin, OUTPUT); 
  pinMode(redLedPin, OUTPUT); 
  pinMode(greenLedPin, OUTPUT); 

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("GAS&FIRE&IR");
  lcd.setCursor(0,1);
  lcd.print("DETECTION SYSTEM");
  delay(2000);
  lcd.clear();
}

void loop(){
  gasSensorValue = analogRead(gasSensorPin); 
  gasSensorValue = gasSensorValue - 50;
  if(gasSensorValue < 0){gasSensorValue = 0;}

  flameSensorValue = analogRead(flameSensorPin);
  flameSensorValue = flameSensorValue - 50;
  if(flameSensorValue < 0){flameSensorValue = 0;}

  irSensorValue = analogRead(irSensorPin);
  irSensorValue = irSensorValue - 50;
  if(irSensorValue < 0){irSensorValue = 0;}

//  lcd.setCursor(0, 0);
//  lcd.print("Gas Level: ");
 // lcd.print(gasSensorValue);
//  lcd.print("  ");

 // lcd.setCursor(0, 1);
//  lcd.print("Flame Level: ");
//  lcd.print(flameSensorValue);
//  lcd.print("  ");

  if(gasSensorValue >= gasSensorThreshold){ 
    lcd.setCursor(0, 1);
    lcd.print("Alert....!!!");    
    digitalWrite(buzzerPin, HIGH); // Turn buzzer on.  
    digitalWrite(redLedPin, HIGH); // Turn red LED on.
    digitalWrite(greenLedPin, LOW); // Turn green LED off.
    delay(1000);
  }
    else if(flameSensorValue <= flameSensorThreshold){ 
    lcd.setCursor(0, 1);
    lcd.print("Alert....!!!");    
    digitalWrite(buzzerPin, HIGH); // Turn buzzer on.  
    digitalWrite(redLedPin, HIGH); // Turn red LED on.
    digitalWrite(greenLedPin, LOW); // Turn green LED off.
    delay(1000);
  }
  else if(irSensorValue <= irSensorThreshold){ 
    lcd.setCursor(0, 1);
    lcd.print("Alert....!!!");    
    digitalWrite(buzzerPin, HIGH); // Turn buzzer on.  
    digitalWrite(redLedPin, HIGH); // Turn red LED on.
    digitalWrite(greenLedPin, LOW); // Turn green LED off.
    delay(1000);
  }
  else{ 
    lcd.setCursor(0, 1);
    lcd.print(".....Normal.....");   
    digitalWrite(buzzerPin, LOW); // Turn buzzer off.  
    digitalWrite(redLedPin, LOW); // Turn red LED off.
    digitalWrite(greenLedPin, HIGH); // Turn green LED on.
  }
  delay(100);
}
