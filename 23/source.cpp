#include <iostream>
#include <string>
using namespace std;

class Klase
{
public:
	int kint,
		kint2;
};

class KonteinerineKlase
{
public:
	string pavadinimas;
	Klase ObjektuMasyvas[5];
};

int main()
{
	KonteinerineKlase Objektas;
	Objektas.pavadinimas = "Kažkas";
	Objektas.ObjektuMasyvas[0].kint = 4;
	Objektas.ObjektuMasyvas[0].kint2 = 9;
	return 0;
}