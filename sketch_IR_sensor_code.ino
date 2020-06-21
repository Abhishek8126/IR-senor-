
#include <IRremote.h>

int IRpin = 11;
IRrecv irrecv(IRpin);
decode_results results;


void setup()
{
  Serial.begin(9600);
  Serial.print("hello");
  irrecv.enableIRIn(); // Start the receiver
  pinMode(9,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);

}
void loop()

{
  int a;
  if (irrecv.decode(&results))
  {
    Serial.println(results.value);
    delay(10);

    irrecv.resume();

 }
}
