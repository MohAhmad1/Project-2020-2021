int PIR_motion_sensor = 4;    //PIR sensor = Pin 4

void setup()
{
    // Configure the serial communication line at 9600 baud (bits per second.)
    Serial.begin(9600);
    pinMode(PIR_motion_sensor,INPUT);       // Configure the Touch pin for input  
}
void loop()
    {                  
       if(digitalRead(PIR_motion_sensor))    //Read the state of the PIR value:
       {
         Serial.println("Motion detected!"); // Print Motion detected in Serial Monitor
         delay(2000);
       }
       else
       {
         Serial.println("Motion not detected!"); // Print Motion not detected in Serial Monitor
       }
    }
