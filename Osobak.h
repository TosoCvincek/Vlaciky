#pragma once
#include "ZoznamStanic.h"
#include "Mesto.h"
#include "Nieco.h"
#include <vector>
#include <iostream>

using namespace std;

class Osobak
{
private:
	vector<Nieco*> trat;
	int casStartu = 0;
public:
	Osobak(int pCasStartu, vector<Mesto*> zoznam, char typ);
	void vypis();
	~Osobak();
};

