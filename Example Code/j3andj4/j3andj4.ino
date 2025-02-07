// Make a single stepper bounce from one limit to another
 
#include <AccelStepper.h>
#include <Servo.h>
 
//Defining pins
Servo myservo;
int pos = 0;
int StepperPulse = 6;  // Pulse or step pin
int StepperDirection = 7;  // Direction pin
AccelStepper stepper(1, StepperPulse, StepperDirection);
int Stepper1Pulse = 8;  // Pulse or step pin
int Stepper1Direction = 9;  // Direction pin
AccelStepper stepper1(1, Stepper1Pulse, Stepper1Direction);
 
void setup()
{  
  myservo.attach(12);
  // Change these to suit your stepper if you want
  stepper.setMaxSpeed(400);
  stepper.setAcceleration(30);
  stepper.moveTo(-2000);
  stepper1.setMaxSpeed(400);
  stepper1.setAcceleration(30);
  stepper1.moveTo(-700);
}
 
void loop()
{
    // If at the end of travel go to the other end
if (stepper.currentPosition()  == -2000
&&  stepper1.currentPosition() == -700)
      stepper.moveTo(0);

if (stepper.currentPosition()  == -2000
&&  stepper1.currentPosition() == -700)
      stepper1.moveTo(0);

if (stepper.currentPosition()  == -2000
&&  stepper1.currentPosition() == -700)
  for (pos == 0; pos <= 90; pos += 1) { // goes from 90 degrees to 00 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
};
    stepper.run();
    stepper1.run();
}