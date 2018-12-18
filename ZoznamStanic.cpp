#include "ZoznamStanic.h"



ZoznamStanic::ZoznamStanic()
{
}

void ZoznamStanic::nacitaj(const char * menoSuboru)
{
	ifstream citac;
	citac.open(menoSuboru);
	string riadok;
	string nazov;
	string kilometre;
	string typ;
	while (getline(citac, riadok)) {
		istringstream linestream(riadok);
		string word;
		linestream >> word;
		typ = word;
		linestream >> word;
		nazov = word;
		linestream >> word;
		kilometre = word;
		Mesto *m = new Mesto();
		m->nacitajUdaje(stod(kilometre), nazov, stoi(typ));
		zoznam.push_back(m);
	}
	if (citac.is_open()) citac.close();
}

bool wayToSort(Mesto *m1, Mesto *m2) { return m1->getKm() < m2->getKm(); };

void ZoznamStanic::uprac()
{
	sort(zoznam.begin(), zoznam.end(),wayToSort);
}

void ZoznamStanic::vypis()
{
	cout << "Upratane:" << endl;
	for (unsigned int i = 0; i < zoznam.size(); i++)
	{
		zoznam[i]->vypis();
	}
}

ZoznamStanic::~ZoznamStanic()
{
}

