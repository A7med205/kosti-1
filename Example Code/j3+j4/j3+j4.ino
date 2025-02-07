// Make a single stepper bounce from one limit to another
 
#include <AccelStepper.h>
 
//Defining pins
int StepperPulse = 6;  // Pulse or step pin
int StepperDirection = 7;  // Direction pin
AccelStepper stepper(1, StepperPulse, StepperDirection);
int Stepper1Pulse = 8;  // Pulse or step pin
int Stepper1Direction = 9;  // Direction pin
AccelStepper stepper1(1, Stepper1Pulse, Stepper1Direction);
 
void setup()
{  
  // Change these to suit your stepper if you want
  stepper.setMaxSpeed(400);
  stepper.setAcceleration(30);
  stepper.moveTo(-2000);
  stepper1.setMaxSpeed(400);
  stepper1.setAcceleration(30);
  stepper1.moveTo(-2000);
}
 
void loop()
{
    // If at the end of travel go to the other end
if (stepper.currentPosition() == -2000)
      stepper.moveTo(0);
      
    stepper.run();

if (stepper1.currentPosition() == -2000)
      stepper1.moveTo(0);

    stepper1.run();
}