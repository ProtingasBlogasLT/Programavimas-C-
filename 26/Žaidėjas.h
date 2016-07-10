#pragma once
#include <string>
using namespace std;

class Žaidėjas
{
private:
	string vardas;
	double ūgis;
	int žaista,
		įmesta;

public:
	void Dėti(string var, double ūg, int žai, int im)
	{
		vardas = var;
		ūgis = ūg;
		žaista = žai;
		įmesta = im;
	}
	string ImtiVardą() { return vardas; }
	double ImtiŪgį() { return ūgis; }
	int ImtiŽaista() { return žaista; }
	int ImtiĮmesta() { return įmesta; }

	bool operator < (Žaidėjas kitas) { return this->vardas < kitas.vardas;	}
};