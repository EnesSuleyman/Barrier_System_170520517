#include<Servo.h>
Servo motor;
#define echo 2
#define trig 4
long sure, mesafe;

void setup() {
Serial.begin(9600); 
motor.attach(10); //Motorun PWM sinyalini almış olduğu pin
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
}

void loop() {
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(100000);
digitalWrite(trig, LOW);
sure=pulseIn(echo,HIGH);
mesafe=sure/58.2;
Serial.println(mesafe);
  if (mesafe <20 ) {
   motor.write(90);  //Motorumuz 90 derece dönecektir
   }
  else {
   motor.write(0);
   }
}
