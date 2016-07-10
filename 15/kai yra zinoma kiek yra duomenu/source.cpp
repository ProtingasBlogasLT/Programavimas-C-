#include <fstream>
#include <string>
#include <iostream>
using namespace std;

const string duom = "gyventojai.txt";

class Gyventojas
{
public:
	string vardas;
	int amzius;
};

void Nuskaitymas(const string fv, Gyventojas g[]);

int main()
{
	setlocale(LC_ALL, "Lithuanian");
	Gyventojas visi[5];
	Nuskaitymas(duom, visi);
	cout << visi[0].vardas << endl
		<< visi[1].amzius << endl
		<< visi[2].vardas << endl;

	return 0;
}

/* fv - failas iš kurio nuskaitoma
g[] - masyvas į kurį yra nuskaitoma */
void Nuskaitymas(const string fv, Gyventojas g[])
{
	int kiek;
	ifstream fin(fv);
	fin >> kiek;

	for (int i = 0; i < kiek; i++)
	{
		getline(fin, g[i].vardas, ',');
		fin >> ws;	// nuskaito tuščius tarpus
		fin >> g[i].amzius;
		fin >> ws;
	}

	fin.close();
}