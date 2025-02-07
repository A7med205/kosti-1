// Make a single stepper bounce from one limit to another
 
#include <AccelStepper.h>
 
//Defining pins
int StepperPulse = 2;  // Pulse or step pin
int StepperDirection = 3;  // Direction pin
AccelStepper stepper(1, StepperPulse, StepperDirection);
 
void setup()
{  
  // Change these to suit your stepper if you want
  stepper.setMaxSpeed(100);
  stepper.setAcceleration(20);
  stepper.moveTo(-400);
}
 
void loop()
{
    // If at the end of travel go to the other end
if (stepper.currentPosition() == -400)
      stepper.moveTo(0);

    if (stepper.currentPosition() == 0)
      stepper.moveTo(-400);  

    stepper.run();
}