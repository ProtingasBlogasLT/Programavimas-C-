#include <iostream>
#include <fstream>
#include <iomanip>
#include "Komanda.h"
using namespace std;

void Nuskaitymas(string failas, Komanda & K);
void Išvedimas(Komanda K, string antr);
double Vidurkis(Komanda K);
void Atrinkimas(Komanda K, Komanda & A);

int main()
{
	setlocale(LC_ALL, "Lithuanian");

	Komanda K, atrinktas;

	Nuskaitymas("dm.txt", K);
	Išvedimas(K, "Pradiniai duomenys");

	atrinktas.DėtiDuom(K.ImtiPav(), K.ImtiRungtSk());
	Atrinkimas(K, atrinktas);
	Išvedimas(atrinktas, "Atrinkti duomenys");

	atrinktas.Rikiuoti();
	Išvedimas(atrinktas, "Surikiuoti duomenys");

	return 0;
}

/* Nuskaito duomenis iš failo į konteinerinės klasės objektą.
 * failas - failas iš kurio nuskaitoma
 * K - objektas į kurį skaitoma */
void Nuskaitymas(string failas, Komanda & K)
{
	ifstream f(failas);
	string pv; int rung;
	Žaidėjas z; string var; double ug; int zai, task;

	getline(f, pv, ',');
	f >> rung;
	K.DėtiDuom(pv, rung);

	while (!f.eof())
	{
		f >> ws;
		getline(f, var, ',');
		f >> ug >> zai >> task;
		z.Dėti(var, ug, zai, task);
		K.DėtiŽaidėją(z);
	}

	f.close();
}

/* Išveda objekto duomenis
 * K - duotasis objektas
 * antr - antraštė */
void Išvedimas(Komanda K, string antr)
{
	cout << "--- " << antr << " ---\n\n"
		<< "Komandos pavadinimas: " << K.ImtiPav() << endl
		<< "Žaista rungtynių: " << K.ImtiRungtSk() << endl
		<< "Žaidėjų: " << K.ImtiKiek() << "\n\n"
		<< "Vardas - Ūgis, m - Žaista - Įmesta\n\n";

	for (int i = 0; i < K.ImtiKiek(); i++)
	{
		cout << setw(10) << right << K.ImtiŽaidėją(i).ImtiVardą() << " "
			<< setw(5) << left << K.ImtiŽaidėją(i).ImtiŪgį()
			<< setw(5) << left << K.ImtiŽaidėją(i).ImtiŽaista()
			<< setw(5) << left << K.ImtiŽaidėją(i).ImtiĮmesta() << endl;
	}
	cout << "\n\n";
}

/* Ieškomas komandos žaidėjų vidurkis
 * K - duota komanda
 * return vidurkis */
double Vidurkis(Komanda K)
{
	int suma = 0;

	for (int i = 0; i < K.ImtiKiek(); i++)
		suma += K.ImtiŽaidėją(i).ImtiĮmesta();

	return suma / K.ImtiKiek();
}

/* Atrenkamas sąrašas žaidėjų, kurie žaidė visas komandos rungtynes
 * ir pelnė daugiau taškų, nei komandos žaidėjų taškų vidurkis.
 * K - komanda iš kurios atrenkami žaidėjai
 * A - naujas objektas į kurį rašomi atrinkti žaidėjai */
void Atrinkimas(Komanda K, Komanda & A)
{
	double vidurkis = Vidurkis(K);

	for (int i = 0; i < K.ImtiKiek(); i++)
	{
		if (K.ImtiŽaidėją(i).ImtiŽaista() == K.ImtiRungtSk() &&
			K.ImtiŽaidėją(i).ImtiĮmesta() > vidurkis)
		{
			A.DėtiŽaidėją(K.ImtiŽaidėją(i));
		}
	}
}