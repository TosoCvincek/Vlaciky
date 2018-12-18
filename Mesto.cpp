#include "Mesto.h"



Mesto::Mesto()
{
}

void Mesto::nacitajUdaje(double pKilometre, string pNazov, int pTyp)
{
	kilometre = pKilometre;
	nazov = pNazov;
	typ = pTyp;
}


void Mesto::vypis()
{
	cout << kilometre << ": " << nazov << endl;
}

Mesto::~Mesto()
{
}
