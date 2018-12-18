#include "ZoznamStanic.h"
#include "Osobak.h"
int main() {
	ZoznamStanic z;
	z.nacitaj("input.txt");
	z.uprac();
	z.vypis();
	Osobak *o = new Osobak(681,z.getZoznam(),'o');
	cout << "osobak" << endl;
	o->vypis();
	Osobak *r = new Osobak(681, z.getZoznam(),'r');
	cout << "rychlik" << endl;
	r->vypis();
	delete o;
	delete r;
	return 0;
}