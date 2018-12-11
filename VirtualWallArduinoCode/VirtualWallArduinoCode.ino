/*
Messing around getting a DIY virtual wall working.

 
*/


int irled = 3;

void setup() {                
  pinMode(irled, OUTPUT);     
}

void loop() {
  tone(irled, 38000, 1);
  delayMicroseconds(1000);
}
  

