#include <Arduino.h>

int zelena = 12;             
int orange = 11;
int cervena = 10;
int tlacitko = 9;

void setup(){              
  pinMode(zelena, OUTPUT);    
  pinMode(orange, OUTPUT);
  pinMode(cervena, OUTPUT);
}

void loop() {   
if (digitalRead(tlacitko) == HIGH) {   
  digitalWrite(zelena, HIGH);  
  delay(8000);              
  digitalWrite(orange, HIGH);
  delay(1000);             
  digitalWrite(orange, LOW); 
  digitalWrite(zelena, LOW);   
  digitalWrite(cervena, HIGH);
  delay(10000);              
  digitalWrite(zelena, LOW); 
  digitalWrite(orange, HIGH);
  delay(1000);            
  digitalWrite(orange, LOW); 
  }
}                          
