#include <fstream>
#include <string>
#include <iomanip>	// setw(), left, right...
using namespace std;

const string DM = "duom.txt";
const string RE = "rez.txt";

class Gyventojas
{
public:
	string vardas;
	int amzius;
};

void Nuskaitymas(const string DM, Gyventojas g[], int & kiek);
void Spausdinimas(const string re, Gyventojas g[], int kiek, string komentaras);

int main()
{
	setlocale(LC_ALL, "Lithuanian");
	Gyventojas visi[5];		// visų gyventojų duomenys
	int kiek;				// kiek yra gyventojų
	Nuskaitymas(DM, visi, kiek);
	Spausdinimas(RE, visi, kiek, "Pradiniai duomenys");
	ofstream fout(RE, ios::app);
	fout << "Failo pabaiga.\n\n";
	fout.close();
	return 0;
}

/* Nuskaitymo iš failo funkcija
DM - failas iš kurio nuskaitomi duomnys
g[] - masyvas į kurį nuskaitomi duomenys
kiek - gyventojų skaičius */
void Nuskaitymas(const string DM, Gyventojas g[], int & kiek)
{
	ifstream fin(DM);
	fin >> kiek >> ws;

	for (int i = 0; i < kiek; i++)
	{
		getline(fin, g[i].vardas, ',');
		fin >> ws >> g[i].amzius >> ws;
	}

	fin.close();
}

/* Spausdinimo į failą funkcija
re - rezultatų failas, į kurį išvedami duomenys
g[] - masyvas kuris išvedamas
kiek - kiek yra duomenų
komentaras - antraštė virš lentelės */
void Spausdinimas(const string re, Gyventojas g[], int kiek, string komentaras)
{
	string linija(25, '-');
	ofstream f(re);
	f << komentaras << endl << linija << endl
		<< "|    Vardas    | Amžius |" << endl
		<< linija << endl;
	for (int i = 0; i < kiek; i++)
	{
		f << "| " << setw(12) << right << g[i].vardas << " | "
			<< setw(6) << left << g[i].amzius << " |" << endl;
	}
	f << linija << "\n\n";
	f.close();
}