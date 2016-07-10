#include <iostream>
using namespace std;

#define eiluciu 4
#define stulpeliu 3

float Vidurkis(int m[4][3]);
void TeigiamuIrNeigiamuKiekis(int m[4][3]);
void MinIrMax(int m[4][3]);
void Isvedimas(int m[4][3]);
void Sukeitimas(int m[4][3]);

int main()
{
	int skaiciai[4][3] = {
		{ 3, -1, 2 },
		{ 4, -5, 3 },
		{ 8, 0, 9 },
		{ 11, 14, -2 }
	};

	cout << "Masyvas:\n";
	Isvedimas(skaiciai);

	cout << "Vidurkis: " << Vidurkis(skaiciai) << endl;
	TeigiamuIrNeigiamuKiekis(skaiciai);
	MinIrMax(skaiciai);
	Sukeitimas(skaiciai);

	return 0;
}

float Vidurkis(int m[4][3])
{
	float suma = 0;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			suma += m[i][j];
		}
	}

	return suma / (eiluciu * stulpeliu);
}

void TeigiamuIrNeigiamuKiekis(int m[4][3])
{
	int teigiamu = 0,
		neigiamu = 0;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			if (m[i][j] > 0)
				teigiamu++;

			if (m[i][j] < 0)
				neigiamu++;
		}
	}

	cout << "Teigiamu: " << teigiamu << endl
		<< "Neigiamu: " << neigiamu << endl;
}

void MinIrMax(int m[4][3])
{
	int maziausia = 0, me, ms,
		didziausia = 0, de, ds;

	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			if (m[i][j] <= maziausia)
			{
				maziausia = m[i][j];
				me = i;
				ms = j;
			}

			if (m[i][j] >= didziausia)
			{
				didziausia = m[i][j];
				de = i;
				ds = j;
			}
		}
	}

	cout << "Maziausia: " << maziausia << " (" << me + 1 << " eil. " << ms + 1 << " stulp.)\n"
		<< "Didziausia: " << didziausia << " (" << de + 1 << " eil. " << ds + 1 << " stulp.)\n";
}

void Isvedimas(int m[4][3])
{
	for (int i = 0; i < eiluciu; i++)
	{
		for (int j = 0; j < stulpeliu; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void Sukeitimas(int m[4][3])
{
	swap(m[0][2], m[2][0]);
	cout << "Sukeitus skaicius:\n";
	Isvedimas(m);
}