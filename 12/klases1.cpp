#include <iostream>
#include <string>
using namespace std;

class Zaidejas
{
public:
	string vardas;		// žaidėjo vardas
	string pavarde;		// žaidėjo pavardė
	int numeris;		// marškinėlių numeris
	double ugis;		// žaidėjo ūgis
};

void Ivedimas(Zaidejas & Z);

int main() {

	setlocale(LC_ALL, "Lithuanian");

	Zaidejas Z1, Z2;
	Ivedimas(Z1);
	Ivedimas(Z2);
	cout << Z1.pavarde << Z2.ugis << endl;

	return 0;
}

void Ivedimas(Zaidejas & Z) {
	cout << "Žaidėjo vardas, pavardė, marškinėlių numeris, ūgis:\n";
	cin >> Z.vardas >> Z.pavarde >> Z.numeris >> Z.ugis;
	cout << "\n";
}