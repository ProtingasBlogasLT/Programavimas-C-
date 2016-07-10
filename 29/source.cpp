#include <fstream>
#include <string>
using namespace std;

void Šalinimas(int k);
void NaujosĮterpimas(int k, string iterpiama);
string ImtiEilutę(int reikalinga);
void Sukeitimas(int v, int d);

int main()
{
	Šalinimas(2);
	NaujosĮterpimas(2, "Įterptoji failo teksto eilutė.");
	Sukeitimas(1, 3);
	return 0;
}

/* Šalinama nurodyta teksto eilutė iš failo.
 * k - nurodytos teksto eilutės numeris */
void Šalinimas(int k)
{
	ifstream fin("duomenys.txt");
	ofstream fout("salinimo.txt");
	string eilute;

	// perrašomos eilutės iki šalinamosios
	for (int i = 0; i < k; i++)
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	// šalinamoji eilutė neperrašoma
	getline(fin, eilute);

	// perrašomos likusios eilutės
	while (!fin.eof())
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	fout.close();
	fin.close();
}

/* Įterpiama nauja teksto eilutė į nurodytą vieną tekste.
 * k - vieta į kurią įterpiama teksto eilutė
 * iterpiama - įterpiamos eilutės tekstas */
void NaujosĮterpimas(int k, string iterpiama)
{
	ifstream fin("duomenys.txt");
	ofstream fout("iterpimas.txt");
	string eilute;

	// perrašomos eilutės iki įterpiamos
	for (int i = 0; i < k; i++)
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	// įterpiama teksto eilutė
	fout << iterpiama << endl;

	// perrašomos likusios eilutės
	while (!fin.eof())
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	fout.close();
	fin.close();
}

/* Tekste sukeičia dvi eilutes vietomis.
 * v - pirmoji teksto eilutė
 * d - antroji teksto eilutė */
void Sukeitimas(int v, int d)
{
	ifstream fin("duomenys.txt");
	ofstream fout("sukeitimas.txt");
	string eilute;
	string pirmoji = ImtiEilutę(v);
	string antroji = ImtiEilutę(d);

	// perrašomos eilutės iki pirmos sukeičiamos
	for (int i = 0; i < v; i++)
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	// įterpiama antra teksto eilutė
	fout << antroji << endl;

	// praleidžiama viena eilutė
	getline(fin, eilute);

	// perrašomos eilutės iki antros sukeičiamos
	for (int i = 0; i < d - v - 1; i++)
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	// praleidžiama viena eilutė
	getline(fin, eilute);

	// įterpiama pirmoji eilutė
	fout << pirmoji << endl;

	// perrašomos likusios eilutės
	while (!fin.eof())
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	fout.close();
	fin.close();
}

/* Ima nurodytą eilutę iš teksto.
 * reikalinga - teksto eilutės numeris
 return grąžina reikalingos eilutės tekstą */
string ImtiEilutę(int reikalinga)
{
	string eilute;
	int dabartine = 0;
	ifstream fin("duomenys.txt");

	while (!fin.eof())
	{
		getline(fin, eilute);
		if (dabartine == reikalinga)
		{
			fin.close();
			return eilute;
		}
		dabartine++;
	}
}