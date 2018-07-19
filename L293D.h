/* Arduino library for motor control using L293D chip
* Alex Chlabicz
* 19/7/18
*/

#include "Arduino.h"

#ifndef L293D_h
#define L293D_h

class L293DMotor
{
public:
	L293DMotor(int p1, int p2, int p3, int p4);
	void motorA_CW();
	void motorA_counterCW();
	void motorB_CW();
	void motorB_counterCW();
	void motorA_Stop();
	void motorB_Stop();
	void turn_Left();
	void turn_Right();
	void turn_Stop();
private:
	int motorPin1;
	int motorPin2;
	int motorPin3;
	int motorPin4;
};

#endif