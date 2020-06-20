#include<Servo.h>
Servo motor1;

void setup()
{
 motor1.attach(D0);
 pinMode(D1,INPUT);
 Serial.begin(9600);
}

void loop() 
{
  Serial.println("IR is");
  Serial.println(digitalRead(D1));
  delay(1000);

}
