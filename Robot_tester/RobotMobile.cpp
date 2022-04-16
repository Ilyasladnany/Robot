#include "RobotMobile.h"

RobotMobile::RobotMobile():Robot()
{
	this->nbrR = 2;
	this->position = 3;
}

RobotMobile::RobotMobile(string n, double v, double t, string ty, int nbr, int pst):Robot(n,v,t,ty)
{
	this->nbrR = nbr;
	this->position = pst;
}

RobotMobile::~RobotMobile()
{
	cout << "destructeur Robot mobile" << endl;
}

void RobotMobile::display()
{
	Robot::display();//demasquage
	cout << "nombre roues:" << this->nbrR << endl;
	cout << "position:" << this->position << endl;
	cout << "type:" << this->type << endl;
	
}


