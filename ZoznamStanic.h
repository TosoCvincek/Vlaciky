#pragma once
#include "Mesto.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
class ZoznamStanic
{
private:
	vector<Mesto*> zoznam;
public:
	ZoznamStanic();
	void nacitaj(const char* menoSuboru);
	void uprac();
	void vypis();
	vector<Mesto*> getZoznam() { return zoznam; };
	~ZoznamStanic();
};

