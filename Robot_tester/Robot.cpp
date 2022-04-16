#include "Robot.h"




int Robot::cpt = 0;
Robot::Robot()
{
	this->nom = "defaut";
	this->vitesse = 20.0;
	this->ram.RAM::RAM();
	this->id = Robot::cpt++;

}

Robot::Robot(string n, double v, double t,string ty)
{
	this->nom = n;
	this->vitesse = v;
	this->ram.RAM::RAM(t, ty);
	this->id = Robot::cpt++;
}

Robot::Robot(const Robot& R)
{
	this->nom = R.nom;
	this->vitesse = R.vitesse;
	this->ram = R.ram;
	this->id = R.id;
}

Robot::~Robot()
{
	cout << "destructeur Robot" << endl;
}

void Robot::connecter()
{
	cout << "bienvenue" << this->nom << endl;
}

void Robot::display()
{
	Robot::connecter();
	cout << "id:" << this->id << endl;
	cout << "vitesse:" << this->vitesse << endl;
	this->ram.RAM::afficher();
	cout << "type:" << this->type << endl;
}
