#include <iostream>
#include <string>
using namespace std;

const int maks = 10;	// maksimalus masyvo dydis

/* Klasė */
class Zaidejas
{
private:
	string vardas;	// žaidėjo vardas
	string pavarde;	// žaidėjo pavardė
	int numeris;		// marškinėlių numeris
	double ugis;		// žaidėjo ūgis
public:
	void Deti(string v, string p, int n, double u);
	string ImtiVarda()	{ return vardas; }
	string ImtiPavarde()	{ return pavarde; }
	int ImtiNumeri()	{ return numeris; }
	double ImtiUgi()	{ return ugis; }
};

/* Klasės funkcija, su kuria yra dedami duomenys */
void Zaidejas::Deti(string v, string p, int n, double u) {
	vardas = v;
	pavarde = p;
	numeris = n;
	ugis = u;
}

/* Funkcijų prototipai */
void Ivedimas(Zaidejas Z[]);

/* Pagrindinė funkcija */
int main() {

	setlocale(LC_ALL, "Lithuanian");

	//int skaiciai[5] = {10, 15, 1, 5, 9};
	////                 0,  1,  2, 3, 4, 5
	//cout << skaiciai[2];

	Zaidejas zaidejai[maks];
	Ivedimas(zaidejai);

	cout << zaidejai[0].ImtiNumeri() << zaidejai[1].ImtiPavarde() << endl;

	return 0;
}

/* Funkcija, leidžianti dėti duomenis apie žaidėjus į masyvą
Z[] - nurodytas masyvas */
void Ivedimas(Zaidejas Z[]) {
	string v, p; int num; double ug;
	for (int i = 0; i < 2; i++)
	{
		cout << "Žaidėjo vardas, pavardė, marškinėlių numeris, ūgis:\n";
		cin >> v >> p >> num >> ug;
		Z[i].Deti(v, p, num, ug);
	}
	cout << "\n\n";
}