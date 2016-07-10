#pragma once
#include <string>
#include "Klase.h"
using namespace std;

class KonteinerineKlase
{
public:
	static const int maks = 100;

private:
	string pav;
	int kiek;
	Klase ObjektuMasyvas[maks];

public:
	string ImtiPav() { return pav; }
	int ImtiKiek() { return kiek; }
	void DėtiDuom(string pv, int k) { pav = pv; kiek = k; }

	Klase ImtiObjekta(int i) { return ObjektuMasyvas[i]; }
	void DetiObjekta(const Klase & objektas)
	{
		ObjektuMasyvas[kiek++] = objektas;
	}
};