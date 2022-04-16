#include "RAM.h"

RAM::RAM()
{
	this->taille = 2.0;
	this->type = "go";
}

RAM::RAM(int t, string ty)
{
	this->taille = t;
	this->type = ty;
}

RAM::RAM(const RAM& RAM)
{
	this->taille = RAM.taille;
	this->type = RAM.type;
}

RAM::~RAM()
{
	cout << "destructeur Ram" << endl;
}

void RAM::afficher()
{
	cout << "ram:" << this->taille << "" << this->type << endl;
}
