/* Rasti eilutę, kurioje ilgiausias žodis prasideda ir baigiasi ta pačia raide.
 * Pašalinti tą eilutę. */

#include <fstream>
#include <string>
using namespace std;

int AnalizuotiTekstą();
string AnalizuotiEilutę(string eilute);
void ŠalintiEilutę(int n);

int main()
{
	ŠalintiEilutę(AnalizuotiTekstą());
	return 0;
}

/* Analizuoja tekstą eilutė po eilutės ir ieško ilgiausio žodžio tekste,
 * kuris prasideda ir baigiasi ta pačia raide.
 return grąžina rasto žodžio eilutės numerį (indeksą) */
int AnalizuotiTekstą()
{
	ifstream fin("duomenys.txt");

	string eilute,			// šiuo metu analizuojama eilutė
		ilgiausias = "",	// ilgiausias žodis TEKSTE
		laikinas;			// ilgiausias žodis EILUTĖJE
	int eilutesNr = 0,		// dabar analizuojamos eilutės indeksas
		ilgiausioEilute;	// ilgiausio žodio tekste eilutės indeksas

	// kol ne failo pabaiga, tol skaito kiekvieną eilutę ir ją analizuoja
	while (!fin.eof())
	{
		// nuskaito eilutę
		getline(fin, eilute);

		// analizuoja eilutę
		laikinas = AnalizuotiEilutę(eilute);

		// tikrina ar eilutėje rastas ilgiausias žodis yra ilgesnis už rastą ilgiausią tekste
		if (laikinas.length() > ilgiausias.length())
		{
			ilgiausias = laikinas;
			ilgiausioEilute = eilutesNr;
		}

		eilutesNr++;
	}

	fin.close();

	// grąžina rasto ilgiausio žodžio eilutės numerį (indeksą)
	return ilgiausioEilute;
}

/* Analizuoja eilutę išskiriant žodžius. Ieško ilgiausio žodžio eilutėje,
 * kuris prasideda ir baigiasi ta pačia raide.
 * eilute - analizuojama teksto eilutė
 return grąžina rastą ilgiausią žodį */
string AnalizuotiEilutę(string eilute)
{
	int pr = -1,		// ilgiausio žodžio eilutėje pradžia
		ilg = 0,		// ilgiausio žodžio ilgis
		zpr,			// dabar analizuojamo žodžio pradžia
		zpb = 0;		// dabar analizuojamo žodžio pabaiga
	eilute += " ";		// mūsų eilutė + tarpas
	string ilgiausias;	// rastas ilgiausias žodis eilutėje

	// randa žodžio pradžią ir patikrina ar dar ne teksto eilutės pabaiga
	while ((zpr = eilute.find_first_not_of(" ", zpb)) != -1)
	{
		// randa žodžio pabaigą
		zpb = eilute.find_first_of(" ", zpr);

		/* tikrina ar dabar analizuojamas žodis yra ilgiausias eilutėje IR
		ar prasideda ir baigiasi ta pačia raide */
		if (zpb - zpr > ilg && eilute.at(zpr) == eilute.at(zpb-1))
		{
			pr = zpr;
			ilg = zpb - zpr;
		}
	}
	// iš eilutės iškerpa rastą ilgiausią žodį ir jį talpina į kintąmąjį "ilgiausias"
	ilgiausias = eilute.substr(pr, ilg);

	// grąžina ilgiausią žodį string pavidalu
	return ilgiausias;
}

/* Šalina nurodytą eilutę.
 * n - šalinamos eilutės indeksas */
void ŠalintiEilutę(int n)
{
	ifstream fin("duomenys.txt");
	ofstream fout("rezultatai.txt");
	string eilute;

	// perrašo visas eilutes iki šalinamos
	for (int i = 0; i < n; i++)
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	// praleidžia šalinamą eilutę
	getline(fin, eilute);

	// perrašo likusias eilutes
	while (!fin.eof())
	{
		getline(fin, eilute);
		fout << eilute << endl;
	}

	fout.close();
	fin.close();
}