/*
 * Use SoftwareSerial to talk to BlueSMiRF module
 * note pairing code is 1234
 */

#include <SoftwareSerial.h>

const int rxpin = 2;           // pin used to receive
const int txpin = 3;           // pin used to send to
SoftwareSerial bluetooth(rxpin, txpin);  // new serial port on given pins

void setup()
{
  pinMode(13, OUTPUT);
  //Serial.begin(9600);
  bluetooth.begin(115200);  // initialize the software serial port
  //Serial.println("Serial ready");
  bluetooth.println("Bluetooth ready");
}

void loop()
{
  if (bluetooth.available())
  {
    char c = (char)bluetooth.read();
    if (c == '2')
    {
      digitalWrite(13, HIGH);
    }
    if (c == '4')
    {
      digitalWrite(13, LOW);
    }
    //Serial.write(c);
  }
  /*if (Serial.available())
  {
    char c = (char)Serial.read();
    bluetooth.write(c);
  }*/
}
