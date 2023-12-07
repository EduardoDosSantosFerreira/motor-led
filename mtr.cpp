#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 10, 11, 12 , 13);



int rpm;
int gear;

void setup() {

lcd.begin(4, 4);  
pinMode(2, OUTPUT); //Subtract one from pin number for cylinder number
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
lcd.begin(4, 4);
  
  
  


}

void loop() {
 
 
  
int x;

int delayTime;

int sensorPin = A0; //Potentiometer

int sensorValue;

sensorValue = analogRead(sensorPin);
  
 

if (sensorValue < 512)
    rpm = map(sensorValue, 0, 511, 950 , 8000);
else 
    rpm = map(sensorValue, 511, 1023, 8000 , 1100);
  
  if (sensorValue >0 && sensorValue <85)
    gear = 1;
else if (sensorValue >85 && sensorValue <170) // the if and else if statements refer to up shifting, the rb26dett came with a 6 speed manual transmissons which is the reason why there are 6 gears.
  gear = 2;
else if (sensorValue >170 && sensorValue <255)
  gear = 3;
else if (sensorValue >255 && sensorValue <340)
  gear = 4;
else if (sensorValue >340 && sensorValue <425)
  gear = 5;
else if (sensorValue >425 && sensorValue <511)
  gear = 6;
else if (sensorValue >511 && sensorValue <596)
  gear = 5;
else if (sensorValue >596 && sensorValue <681) 
  gear = 4;
else if (sensorValue >681 && sensorValue <766) 
  gear = 3;
else if (sensorValue >766 && sensorValue <851)
  gear = 2;
else if (sensorValue >851 && sensorValue <936)
  gear = 1;
 
  
  
Serial.println(sensorValue);
 
  
  
    
 lcd.setCursor(0,0); 
 lcd.print(rpm);
 lcd.setCursor(0,1);
 lcd.print(gear);
  
  

x = (sensorValue /6);

delayTime = (x);

// blink all spark plug LEDs in I6 firing order.

// 1-5-3-6-2-4

digitalWrite(2, HIGH);

delay(delayTime);

digitalWrite(2, LOW);

digitalWrite(6, HIGH);

delay(delayTime);

digitalWrite(6, LOW);

digitalWrite(4, HIGH);

delay(delayTime);

digitalWrite(4, LOW);

digitalWrite(7, HIGH);

delay(delayTime);

digitalWrite(7, LOW);

digitalWrite(3,HIGH); 

delay(delayTime);

digitalWrite(3, LOW);
  
digitalWrite(5, HIGH);
  
delay(delayTime);
  
digitalWrite(5, LOW);  
  



}