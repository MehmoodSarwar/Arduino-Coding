#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(2, 3);
int data = 0;                //Variable for storing received data
void setup() 
{
Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
MyBlue.begin(9600);
}
void loop()
{
data = MyBlue.read();       //Read the incoming data and store it into variable data
Serial.print(data);        //Print Value inside data in Serial monitor
Serial.print("\n");        //New line
delay(20); 
}                            
