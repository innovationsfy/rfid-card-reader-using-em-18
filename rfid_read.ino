/* This programn is written by: Prince kumar,Team member innovationsfy
FOr more realtive project visit https://www.innovationsfy.com
All Social handles @innovationsfy
*/

#include <SoftwareSerial.h> // using Software serial for uart communication with em-18 module

SoftwareSerial mySerial(9, 10); // defining and naming the pins for software serial

char data; // container to store received data via rfid tag

void setup(){
  Serial.begin(9600); // to display on arduino serial port setting baud rate
  Serial.println("Tap the RFID card:"); //display over serial port for once in the begining
  mySerial.begin(9600); // baud rate for softwareserial
}

void loop(){
  if(mySerial.available()){  // checking the software serial for any data
      data = mySerial.read();  //reading the softwareserial 
      Serial.print(data);     // printing the raeded data via software serial on arduino serial port 
    }  //ending the if statement
} //ending the main loog program
