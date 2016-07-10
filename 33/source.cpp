#include <iostream>
using namespace std;

void Įvedimas(int m[][3]);
void Išvedimas(int m[][3]);

int main()
{
	// pirmas būdas kaip galima priskirt reikšmes į masyvą
	int a[3][4] = {
		{ 0, 1, 2, 3 }, // eilutė 0
		{ 4, 5, 6, 7 }, // eilutė 1
		{ 8, 9, 10, 11 } // eilutė 2
	};

	// antras būdas kaip galima priskirt reikšmes į masyvą
	int b[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	// su funkcijomis
	int masyvas[2][3];
	Įvedimas(masyvas);
	Išvedimas(masyvas);

	return 0;
}

/* Įveda reikšmes į masyvą. */
void Įvedimas(int m[][3])
{
	// eilutės
	for (int i = 0; i < 2; i++)
	{
		// stulpeliai
		for (int j = 0; j < 3; j++)
		{
			cout << i << " " << j << ": ";
			cin >> m[i][j];
		}
	}
}

/* Išveda masyvo reikšmes į ekraną. */
void Išvedimas(int m[][3])
{
	// eilutės
	for (int i = 0; i < 2; i++)
	{
		// stulpeliai
		for (int j = 0; j < 3; j++)
		{
			cout << m[i][j] << " ";
		}

		cout << endl;
	}
}