#pragma once
#include "Žaidėjas.h"

class Komanda
{
public:
	static const int maks = 30;
private:
	string pavadinimas;
	int rungtynės,
		kiek;
	Žaidėjas visi[maks];
public:
	Komanda() : pavadinimas(""), rungtynės(0), kiek(0) { }

	void DėtiDuom(string pv, int run) { pavadinimas = pv; rungtynės = run; }
	string ImtiPav() { return pavadinimas; }
	int ImtiRungtSk() { return rungtynės; }
	int ImtiKiek() { return kiek; }

	void DėtiŽaidėją(const Žaidėjas & ob) { visi[kiek++] = ob; }
	Žaidėjas ImtiŽaidėją(int i) { return visi[i]; }

	void Rikiuoti();
};