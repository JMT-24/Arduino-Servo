#include <Servo.h>

Servo servo;  // create Servo object to control a servo
int angle = 10;

void setup() 
{
  servo.attach(8); // attach servo to pin 8
  servo.write(angle); // set initial position
}

void loop() 
{
  for (angle = 10; angle <= 180; angle++) 
  {
    servo.write(angle);
    delay(10); // Reduced delay for faster movement
  }

  for (angle = 180; angle >= 10; angle--) 
  {
    servo.write(angle);
    delay(10); // Reduced delay for faster movement
  }
}
