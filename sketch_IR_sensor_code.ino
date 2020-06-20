#include<Servo.h>
Servo motor1;

void setup()
{
 motor1.attach(2);
 pinMode(2,INPUT);
 Serial.begin(9600);
}

void loop() 
{
  Serial.println("IR is");
  Serial.println(digitalRead(2));
  delay(1000);

}
