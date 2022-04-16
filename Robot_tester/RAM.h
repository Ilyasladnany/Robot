#pragma once
#include<iostream>
using namespace std;

class RAM
{
private:
	int taille;
	string type;
public:
	RAM();
	RAM(int t, string ty);
	RAM(const RAM& RAM);
	~RAM();
	void afficher();

};

