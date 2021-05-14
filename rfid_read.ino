#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);

char data;

void setup()
{
  Serial.begin(9600);
  Serial.println("Tap the RFID card:");

  mySerial.begin(9600);
}
void loop()
{
  if(mySerial.available()){
      data = mySerial.read();
      Serial.print(data);
    } 
}
