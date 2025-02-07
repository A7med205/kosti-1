// a set of manually written trajectories, one or multiple joints move during setup, or when a set of conditions is met by one or multiple other joints
// very important: this code assumes the same starting pose as in the video
// similarly, the servo grippers works when one or more conditions are met, note that this is a different gripper than the one in the assembly
// the accelstepper library allows for decelaration and acceleration for each joint, and the manually set paramaters for each motor account for the gear/belt reductions

//Stepper0 is the shoulder joint
//Stepper00 is the basejoint
//Stepper is the elbowjoint
//Stepper1 is the wristjoint
//Stepper2 is the shoulder joint
 
#include <AccelStepper.h>
#include <Servo.h>
 
//Defining pins
Servo myservo;
int pos = 0;

int Stepper0Pulse = 2;  // Pulse or step pin
int Stepper0Direction = 3;  // Direction pin
AccelStepper stepper0(1, Stepper0Pulse, Stepper0Direction);

int Stepper00Pulse = 4;  // Pulse or step pin
int Stepper00Direction = 5;  // Direction pin
AccelStepper stepper00(1, Stepper00Pulse, Stepper00Direction);

int StepperPulse = 6;  // Pulse or step pin
int StepperDirection = 7;  // Direction pin
AccelStepper stepper(1, StepperPulse, StepperDirection);

int Stepper1Pulse = 8;  // Pulse or step pin
int Stepper1Direction = 9;  // Direction pin
AccelStepper stepper1(1, Stepper1Pulse, Stepper1Direction);

int Stepper2Pulse = 10;  // Pulse or step pin
int Stepper2Direction = 11;  // Direction pin
AccelStepper stepper2(1, Stepper2Pulse, Stepper2Direction);
 
void setup()
{  
  myservo.attach(12);
    for (pos == 90; pos >= 0; pos -= 1) { // goes from 90 degrees to 0 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
}

  stepper0.setMaxSpeed(400);
  stepper0.setAcceleration(100);

  stepper00.setMaxSpeed(400);
  stepper00.setAcceleration(100);

  stepper.setMaxSpeed(800);
  stepper.setAcceleration(400);

  stepper1.setMaxSpeed(800);
  stepper1.setAcceleration(400);
  stepper1.moveTo(-1400);

  stepper2.setMaxSpeed(100);
  stepper2.setAcceleration(50);
}
 
void loop()
{
    // If at the end of travel go to the other end
if (stepper0.currentPosition() == 0
&&  stepper1.currentPosition() == -600)
      stepper0.moveTo(600);

if (stepper0.currentPosition() == 0
&&  stepper1.currentPosition() == -600)
      stepper.moveTo(-2500);

if (stepper0.currentPosition() == 0
&&  stepper1.currentPosition() == -600)
      stepper00.moveTo(400);

if (stepper0.currentPosition() == 0
&&  stepper1.currentPosition() == -600)
      stepper2.moveTo(-100);

if (stepper0.currentPosition() == 600
&&  stepper.currentPosition()  == -2500)
     stepper0.moveTo(0);

if (stepper0.currentPosition() == 600
&&  stepper.currentPosition()  == -2500)
     for (pos == 0; pos <= 90; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
};

if (stepper0.currentPosition() == 600
&&  stepper.currentPosition()  == -2500)
     stepper.moveTo(0);

if (stepper0.currentPosition() == 600
&&  stepper.currentPosition()  == -2500)
     stepper1.moveTo(0);

if (stepper0.currentPosition() == 600
&&  stepper.currentPosition()  == -2500)
     stepper00.moveTo(0);

if (stepper0.currentPosition() == 600
&&  stepper.currentPosition()  == -2500)
     stepper2.moveTo(0);

    stepper0.run();
    stepper00.run();
    stepper.run();
    stepper1.run();
    stepper2.run();
}