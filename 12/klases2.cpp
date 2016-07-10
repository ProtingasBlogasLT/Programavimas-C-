#include <iostream>
#include <string>
using namespace std;

class Zaidejas
{
private:
	string vardas;		// žaidėjo vardas
	string pavarde;		// žaidėjo pavardė
	int numeris;		// marškinėlių numeris
	double ugis;		// žaidėjo ūgis
public:
	void Deti(string v, string p, int n, double u);
	string ImtiVarda()	{ return vardas; }
	string ImtiPavarde()	{ return pavarde; }
	int ImtiNumeri()	{ return numeris; }
	double ImtiUgi()	{ return ugis; }
};

void Zaidejas::Deti(string v, string p, int n, double u) {
	vardas = v;
	pavarde = p;
	numeris = n;
	ugis = u;
}

void Ivedimas(Zaidejas & Z);

int main() {

	setlocale(LC_ALL, "Lithuanian");

	Zaidejas Z1, Z2;
	Ivedimas(Z1);
	Ivedimas(Z2);

	cout << Z1.ImtiNumeri() << Z2.ImtiVarda() << endl;

	return 0;
}

void Ivedimas(Zaidejas & Z) {
	string v, p; int num; double ug;
	cout << "Žaidėjo vardas, pavardė, marškinėlių numeris, ūgis:\n";
	cin >> v >> p >> num >> ug;
	Z.Deti(v, p, num, ug);
	cout << "\n\n";
}