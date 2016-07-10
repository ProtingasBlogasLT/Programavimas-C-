#include <iostream>
using namespace std;

class Studentas
{
private:
	int amzius;	// studento amžius
	double ugis;	// studento ūgis, m
public:
	void Deti(int am, double ug) { amzius = am; ugis = ug; }
	int ImtiAmziu()		{ return amzius; }
	double ImtiUgi()	{ return ugis; }
};

void Ivedimas(Studentas S[], int kiek);
int Auksciausio_amzius(Studentas S[], int kiek);
double Jauniausio_ugis(Studentas S[], int kiek);

int main() {
	setlocale(LC_ALL, "Lithuanian");

	int kiek = 3;		// kiek studentų
	Studentas studentai[3];	// studentų masyvas

	Ivedimas(studentai, kiek);
	cout << "Aukščiausio studento amžius: " << Auksciausio_amzius(studentai, kiek)
		<< "\nJauniausio studento ūgis: " << Jauniausio_ugis(studentai, kiek) << " m.\n";

	return 0;
}

/* Funkcija, leidžianti įvesti duomenis apie studentus
S[] - nurodytas masyvas į kurį dedu duomenis
kiek - kiek studentų */
void Ivedimas(Studentas S[], int kiek) {
	int amzius; double ugis;
	cout << "Įveskite duomenis apie tris studentus.\n\n"
		<< "Amžius Ūgis\n\n";
	for (int i = 0; i < kiek; i++)
	{
		cout << i+1 << "-as studentas.\n";
		cin >> amzius >> ugis;
		S[i].Deti(amzius, ugis);
		cout << endl;
	}
	cout << endl;
}

/* Ieško koks yra aukščiausio studento amžius
S[] - masyvas, kuriame yra duomenys apie studentus
kiek - kiek studentų */
int Auksciausio_amzius(Studentas S[], int kiek) {

	int amzius = S[0].ImtiAmziu();
	double ugis = S[0].ImtiUgi();

	for (int i = 0; i < kiek; i++)
	{
		if (S[i].ImtiUgi() > ugis)
		{
			ugis = S[i].ImtiUgi();
			amzius = S[i].ImtiAmziu();
		}
	}
	return amzius;
}

/* Ieško koks yra jaunausio studento ūgis
S[] - masyvas, kuriame yra duomenys apie studentus
kiek - kiek studentų */
double Jauniausio_ugis(Studentas S[], int kiek) {

	int amzius = S[0].ImtiAmziu();
	double ugis = S[0].ImtiUgi();

	for (int i = 0; i < kiek; i++)
	{
		if (S[i].ImtiAmziu() < amzius)
		{
			amzius = S[i].ImtiAmziu();
			ugis = S[i].ImtiUgi();
		}
	}
	return ugis;
}