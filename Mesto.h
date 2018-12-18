#pragma once
#include <string>
#include <iostream>

using namespace std;
class Mesto
{
private:
	double kilometre;
	string nazov;
	int typ;
public:
	Mesto();
	double getKm() { return kilometre; };
	int getTyp() { return typ; };
	string getNazov() { return nazov; };
	void nacitajUdaje(double pKilometre, string pNazov, int pTyp);
	void vypis();
	~Mesto();
};

