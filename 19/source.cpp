#include <iostream>
#include <string>
using namespace std;

void ParodytiMasyva(string komentaras, int masyvas[], int n);
void RikiuotiMasyva(int masyvas[], int n);

int main()
{
	int masyvas[] = { 1, 8, 10, 5, 3, 2 };
	int n = 6;	// masyvos elementų skaičius
	ParodytiMasyva("Nerikiuotas masyvas", masyvas, n);
	RikiuotiMasyva(masyvas, n);
	ParodytiMasyva("Rikiuotas masyvas", masyvas, n);
	return 0;
}

/* Išveda masyvą į ekraną
komentaras - užrašas virš masyvo
masyvas[] - duotasis masyvas
n - masyvo elementų skaičius */
void ParodytiMasyva(string komentaras, int masyvas[], int n)
{
	cout << komentaras << endl;
	for (int i = 0; i < n; i++)
		cout << masyvas[i] << "  ";
	cout << "\n\n\n";
}

/* Rikiavimas burbuliuko metodas 
masyvas[] - rikiuojamas masyvas
n - masyvo narių skaičius */
void RikiuotiMasyva(int masyvas[], int n)
{
	int laik;
	bool rikiuoti = true;
	while (rikiuoti)
	{
		rikiuoti = false;

		for (int i = 0; i < n - 1; i++)
		{
			if (masyvas[i] > masyvas[i + 1])
			{
				// i-asis narys apkeičiamas su sekančiu
				laik = masyvas[i];
				masyvas[i] = masyvas[i + 1];
				masyvas[i + 1] = laik;
				rikiuoti = true;
			}
		}
	}
}