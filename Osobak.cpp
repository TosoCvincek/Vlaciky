#include "Osobak.h"

Osobak::Osobak(int pCasStartu, vector<Mesto*> zoznam, char typ)
{
	if (typ == 'o') {
		casStartu = pCasStartu;
		Nieco *c = new Nieco();
		c->nahod(zoznam[0]->getNazov(), casStartu);
		trat.push_back(c);
		int cas = casStartu;
		for (unsigned int i = 1; i < zoznam.size(); i++)
		{
			if (zoznam[i]->getTyp() == 0) {
				cas = 2 + cas + (((zoznam[i]->getKm() - zoznam[i - 1]->getKm()) * 4) / 3);
			}
			else {
				cas = 3 + cas + (((zoznam[i]->getKm() - zoznam[i - 1]->getKm()) * 4) / 3);
			}
			Nieco *c = new Nieco();
			c->nahod(zoznam[i]->getNazov(), cas);
			trat.push_back(c);
		}
	}
	else {
		casStartu = pCasStartu;
		Nieco *c = new Nieco();
		c->nahod(zoznam[0]->getNazov(), casStartu);
		trat.push_back(c);
		int cas = casStartu;
		for (unsigned int i = 1; i < zoznam.size(); i++)
		{
			if (zoznam[i]->getTyp() == 1) {
				cas = 3 + cas + (((zoznam[i]->getKm() - zoznam[i - 1]->getKm()) * 5) / 3);
				Nieco *c = new Nieco();
				c->nahod(zoznam[i]->getNazov(), cas);
				trat.push_back(c);
			}
		}
	}
}

void Osobak::vypis()
{
	int mins = 0;
	int hours = 0;
	for (unsigned int i = 0; i < trat.size(); i++)
	{
		int cas = trat[i]->getCas();
		hours = cas / 60;
		mins = cas % 60;
		cout << hours << ":" << mins << "  " << trat[i]->getNazov() << endl;
	}
}

Osobak::~Osobak()
{
}
