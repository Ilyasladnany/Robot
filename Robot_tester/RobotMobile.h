#pragma once
#include"Robot.h"
class RobotMobile:Robot
{
private:
	int nbrR;
	int position;
	const string type = "Robot mobile";
public:
	RobotMobile();
	RobotMobile(string n, double v, double t, string ty, int nbr, int pst);
	~RobotMobile();
	void display()override;
};

