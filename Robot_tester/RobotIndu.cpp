#include "RobotIndu.h"

RobotIndu::RobotIndu():Robot()
{
}

RobotIndu::RobotIndu(string n, double v, double t, string ty):Robot(n,v,t,ty)
{
}

RobotIndu::RobotIndu(const Robot& RI) : Robot(RI)
{
}

RobotIndu::~RobotIndu()
{
	cout << "destructeur Robot Industrielle" << endl;
}

void RobotIndu::display()
{
	Robot::display();//demasquage
	cout << "type:" << this->type << endl;
}
