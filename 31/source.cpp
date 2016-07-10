#include <fstream>
#include <string>
using namespace std;

string ImtiEilutę(int reikalinga);
void Apkeitimas(int a, int b);

int main()
{
	Apkeitimas(1, 3);
	return 0;
}

/* Ima nurodytą eilutę.
 * reikalinga - eilutės numeris/indeksas faile
 return grąžina pačią eilutę */
string ImtiEilutę(int reikalinga)
{
	string eilute;
	int dabartine = 0;

	ifstream fin("duomenys.txt");

	while (!fin.eof())
	{
		// nuskaito eilutę
		getline(fin, eilute);

		// jeigu pasiekėme mums reikalingą eilutę
		if (dabartine == reikalinga)
		{
			// tai uždarome faile ir ją grąžiname
			fin.close();
			return eilute;
		}

		dabartine++;
	}
}

/* Eilučių sukeitimas vietomis
 * a - pirmosios eilutės vieta faile (numeris/indeksas)
 * b - antrosios eilutės vieta faile (numeris/indeksas) */
void Apkeitimas(int a, int b)
{
	ifstream fin("duomenys.txt");
	ofstream fout("rezultatai.txt");

	string eilute,
		pirmoji = ImtiEilutę(a),
		antroji = ImtiEilutę(b);
	int n = 0;	// eilutė, kurioje esame

	// eina per visą duomenų failą
	while (!fin.eof())
	{
		// nuskaito eilutę
		getline(fin, eilute);

		// tikrina ar reikia daryti apkeitimą ar perrašyti esamą eilutę
		if (n == a)
		{
			fout << antroji << endl;
		}
		else if (n == b)
		{
			fout << pirmoji << endl;
		}
		else
		{
			fout << eilute << endl;
		}

		n++;
	}

	fout.close();
	fin.close();
}