/***********************************************************************
 * Exp2_DriveForward -- RedBot Experiment 2
 *
 * Drive forward and stop.
 *
 * Hardware setup:
 * The Power switch must be on, the motors must be connected, and the board must be receiving power
 * from the battery. The motor switch must also be switched to RUN.
 *
 * 23 Sept 2013 N. Seidle/M. Hord
 * 04 Oct 2014 B. Huang
 ***********************************************************************/

#include <RedBot.h>  // This line "includes" the RedBot library into your sketch.
// Provides special objects, methods, and functions for the RedBot.

RedBotMotors motors; // Instantiate the motor control object. This only needs
// to be done once.

void setup()
{
  driveDistance(14);
}

void loop()
{
  // Nothing here. We'll get to this in the next experiment.
}

void driveDistance(int distance)
{
  int avgspeed = 16;
  int motorPower = 210;
  long driveTime;
  driveTime = (long) 1000 * distance / avgspeed;
  motors.drive(motorPower);
  delay(driveTime);
  motors.brake();
}



