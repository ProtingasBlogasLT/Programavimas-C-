#include <iostream>
#include <string>
using namespace std;

void ParodytiMasyvą(int m[], int n, string komentaras);
void RikiavimasĮterpimoAlgoritmu(int m[], int n);

void main()
{
	int n = 5,							// kiek masyve narių
		mas[6] = { 14, 9, 2, 3, 74 };	// paprastas skaičių masyvas
	ParodytiMasyvą(mas, n, "Nerikiuotas masyvas");
	RikiavimasĮterpimoAlgoritmu(mas, n);
	ParodytiMasyvą(mas, n, "Surikiuotas masyvas");
}

/* Išspausdina masyvo skaičius.
 * m[] - duotasis masyvas
 * n - kiek masyve skaičių
 * komentaras - užrašas virš išspausdinto masyvo */
void ParodytiMasyvą(int m[], int n, string komentaras)
{
	cout << komentaras << ":\n";
	for (int i = 0; i < n; i++)
		cout << "[ " << m[i] << " ]";
	cout << "\n\n";
}

/* Surikiuoja masyvą naudojant įterpimo algoritmą
 * m[] - duotasis masyvas
 * n - kiek masyve skaičių */
void RikiavimasĮterpimoAlgoritmu(int m[], int n)
{
	int laik;	// turi būti masyvo tipo
	for (int i = 1; i < n; i++)
	{
		int j = i;
		while (j > 0 && m[j - 1] > m[j])
		{
			// skaičių apkeitimas
			laik = m[j];
			m[j] = m[j - 1];
			m[j - 1] = laik;
			j--;
		}
	}
}