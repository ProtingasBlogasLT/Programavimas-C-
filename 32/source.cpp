/**
 * Masyvo aprašymas
 * tipas pavadinimas[dydis] = { reikšmė, reikšmė, reikšmė, reikšmė };
 *
 * int skaičiai[10] = { 7, 3, 5, 7, 22, 9, 0, 1 };
 * char raidės[5] = { 'a', 'b', 'c', 'd' };
 *
 * cin >> masyvas[indeksas] = reikšmė;
 * cout << masyvas[indeksas];
 **/

#include <iostream>
#include <string>
using namespace std;

void Įvedimas(int m[], int & n);
void Išvedimas(int m[], int n, string komentaras);
int Paieška(int m[], int n, int ieškomas);
void Šalinimas(int m[], int & n, int kuris);

int main()
{
	setlocale(LC_ALL, "Lithuanian");

	int masyvas[50],	// skaičių masyvas, kuriame visi kintamieji int tipo
		n;				// masyve esančių elementų skaičius

	Įvedimas(masyvas, n);
	Išvedimas(masyvas, n, "Pradinių duomenų masyvas");
	cout << Paieška(masyvas, n, 7) << endl;
	Šalinimas(masyvas, n, 2);
	Išvedimas(masyvas, n, "Pašalintas 3-asis elementas");

	return 0;
}

/* Funkcija leidžianti įvesti norimą elementų skaičių į masyvą.
 * m[] - duotasis masyvas
 * & n - atnaujinamas skaičius, kuris norodo elementų skaičių masyve */
void Įvedimas(int m[], int & n)
{
	cout << "Kiek elementų įvesti? ";
	cin >> n;
	cout << "\nĮveskite skaičius\n\n";

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " elementas: ";
		cin >> m[i];
	}

	cout << endl;
}

/* Išveda visus masyvo elementus į ekraną.
 * m[] - duotasis masyvas
 * n - masyve esančių elementų skaičius
 * komentaras - komentaras virš masyvo */
void Išvedimas(int m[], int n, string komentaras)
{
	cout << komentaras << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "[ " << m[i] << " ]";
	}

	cout << "\n\n";
}

/* Masyve ieško konkretaus elemento ir jei randa grąžina indekso numerį,
 * kurioje vietoje rastas tas narys.
 * m[] - duotasis masyvas
 * n - masyve esančių elementų kiekis
 * ieškomas - skaičius, kurio ieškoma
 return jei randa, grąžina rasto skaičiaus indekso numerį */
int Paieška(int m[], int n, int ieškomas)
{
	for (int i = 0; i < n; i++)
	{
		if (m[i] == ieškomas)
		{
			return i;
		}
	}
}

/* Šalina pasirinktą elementą iš masyvo.
 * m[] - duotasis masyvas
 * & n - atnaujinamas masyve esančių elementų skaičius
 * kuris - šalinamojo elemento indekso numeris */
void Šalinimas(int m[], int & n, int kuris)
{
	for (int i = 0; i < n; i++)
	{
		if (i >= kuris)
		{
			m[i] = m[i + 1];
		}
	}

	n--;
}