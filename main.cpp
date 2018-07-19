/* Arduino library for motor control using L293D chip
* Alex Chlabicz
* 19/7/18
*/

#include "L293D.h"

L293DMotor::L293DMotor(int p1, int p2, int p3, int p4)
{
	motorPin1 = p1;
	motorPin2 = p2;
	motorPin3 = p3;
	motorPin4 = p4;
	
	pinMode(motorPin1, OUTPUT);
	pinMode(motorPin2, OUTPUT);
	pinMode(motorPin3, OUTPUT);
	pinMode(motorPin4, OUTPUT);
}

void L293DMotor::motorA_CW()
{
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}

void L293DMotor::motorA_counterCW()
{
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}

void L293DMotor::motorB_CW()
{
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
}

void L293DMotor::motorB_counterCW()
{
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
}

void L293DMotor::motorA_Stop()
{
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
}

void L293DMotor::motorB_Stop()
{
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}

void L293DMotor::turn_Left()
{
  //motor A ccw, motor B cw
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
}

void L293DMotor::turn_Right()
{
  //motor A cw, moto B ccw
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
}

void L293DMotor::turn_Stop()
{
  //all stop
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}