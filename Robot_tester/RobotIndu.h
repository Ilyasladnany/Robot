#pragma once
#include"Robot.h"
class RobotIndu:public Robot
{
private:
	const string type="Robot industrielle";
public:
	RobotIndu();
	RobotIndu(string n, double v, double t, string ty);
	RobotIndu(const Robot& RI);
	~RobotIndu();
	void display()override;

};

