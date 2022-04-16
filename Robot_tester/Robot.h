#pragma once
#include<iostream>
#include"RAM.h"
using namespace std;



class Robot
{
private:
	string nom;
	int id;
	double vitesse;
	RAM ram;
	static int cpt;
	const string type = "Robot";
public:
	Robot();//sans para
	Robot(string n, double v, double t, string ty);
	Robot(const Robot& R);
	~Robot();
	void connecter();
	virtual void display();

};

