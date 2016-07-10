#include <iostream>
using namespace std;

class Studentas
{
private:
	int amzius;		// studento amžius
	double ugis,		// studento ūgis, m
		svoris;		// studento svoris, kg
public:
	void Deti(int am, double ug, double sv) { amzius = am; ugis = ug; svoris = sv; }
	int ImtiAmziu()		{ return amzius; }
	double ImtiUgi()	{ return ugis; }
	double ImtiSvori()	{ return svoris; }
};

class Liftas
{
	double kel_galia;	// lifto keliamoji galia, kg
	int talpa;		// lifto talpa
public:
	void Deti(double gal, int tal) { kel_galia = gal; talpa = tal; }
	double ImtiKelGalia()	{ return kel_galia; }
	int ImtiTalpa()		{ return talpa; }
};

void Ivedimas(Studentas S[], int kiek);
void IvedimasApieLifta(Liftas & L);
int Auksciausio_amzius(Studentas S[], int kiek);
double Jauniausio_ugis(Studentas S[], int kiek);
double PerKiekKartuPakils(Liftas L, Studentas S[], int kiek);

int main() {
	setlocale(LC_ALL, "Lithuanian");

	int kiek = 3;		// kiek studentų
	Studentas studentai[3];	// studentų masyvas
	Liftas liftas;		// lifto objektas

	Ivedimas(studentai, kiek);
	cout << "Aukščiausio studento amžius: " << Auksciausio_amzius(studentai, kiek)
		<< "\nJauniausio studento ūgis: " << Jauniausio_ugis(studentai, kiek) << " m.\n\n";
	IvedimasApieLifta(liftas);
	cout << "Liftas studentus pakels per " << PerKiekKartuPakils(liftas, studentai, kiek)
		<< " kartus.\n\n";

	return 0;
}

/* Funkcija, leidžianti įvesti duomenis apie studentus
S[] - nurodytas masyvas į kurį dedu duomenis
kiek - kiek studentų */
void Ivedimas(Studentas S[], int kiek) {
	int amzius; double ugis, svoris;
	cout << "Įveskite duomenis apie tris studentus (per tarpus).\n\n"
		<< "Amžius, Ūgis (m), Svoris (kg)\n\n";
	for (int i = 0; i < kiek; i++)
	{
		cout << i+1 << "-as studentas.\n";
		cin >> amzius >> ugis >> svoris;
		S[i].Deti(amzius, ugis, svoris);
		cout << endl;
	}
	cout << endl;
}

/* Įvedami duomenys apie liftą.
L - lifto objektas */
void IvedimasApieLifta(Liftas & L)
{
	double galia; int talpa;
	cout << "Įveskite duomenis apie liftą.\n\n"
		<< "Keliamoji galia (kg), talpa\n\n";
	cin >> galia >> talpa;
	L.Deti(galia, talpa);
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

/* Per kelis kartus visi studentai pakils liftu į reikiamą aukštą?
L - lifto objektas
S - studentų masyvas
kiek - kiek studentų */
double PerKiekKartuPakils(Liftas L, Studentas S[], int kiek)
{
	double bendras = 0;		// bendras studentų svoris
	for (int i = 0; i < kiek; i++)
	{
		bendras += S[i].ImtiSvori();
		// bendras = bendras + S[i].ImtiSvori();
	}

	double a = bendras / L.ImtiKelGalia();
	double b = kiek / L.ImtiTalpa();

	if (a > b)
		return a;
	else if (a < b)
		return b;
}