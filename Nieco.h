#pragma once
#include <string>
using namespace std;
class Nieco
{
private:
	int cas;
	string nazovStanice;
public:
	Nieco();
	void nahod(string pNazov, int pCas) { nazovStanice = pNazov; cas = pCas; };
	int getCas() { return cas; }
	string getNazov() { return nazovStanice; }
	~Nieco();
};

