// Example 07: Send to the computer the values read from 
// analogue input 0
// Make sure you click on "Serial Monitor"
// after you upload
//
// Copy and paste this example into an empty Arduino sketch

#define SENSOR 0  // select the input pin for the 
                  // sensor resistor

int val = 0; // variable to store the value coming
             // from the sensor

void setup() {

 Serial.begin(9600); // open the serial port to send
                     // data back to the computer at
                     // 9600 bits per second
}

void loop() {

  val = analogRead(SENSOR); // read the value from
                            // the sensor

  Serial.println(val); // print the value to
                       // the serial port

  delay(100); // wait 100ms between
              // each send  
}
