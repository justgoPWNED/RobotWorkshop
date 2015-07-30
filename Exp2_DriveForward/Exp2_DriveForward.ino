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
  driveDistance(5);
  delay(500);
  turnAngle(90);
  driveDistance(5);
  delay(500);
  turnAngle(90);
  driveDistance(5);
  delay(500);
  turnAngle(90);
  driveDistance(5);
  delay(500);
  turnAngle(90);
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
void turnAngle(int angle)
{
  int turningSpeed = 140; // degreees / second

  long turningTime;
  turningTime = (long) 1000 * angle / turningSpeed;

  motors.rightMotor(-100); // Turn CCW at motorPower of 100
  motors.leftMotor(-100);  // Turn CCW at motorPower of 100
  delay(turningTime);      // turning Time
  motors.brake();     // brake() motors
}


