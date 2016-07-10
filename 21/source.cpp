#include <iostream>
using namespace std;

void Nuskaitymas(int m[], int & n)
{
	n = 0;

	do
	{
		cin >> m[n];
		n++;

	} while (m[n-1] != 0);
}

int main()
{
	int skaičiai[20];	// skaičių masyvas
	int n;				// masyve esančių narių kiekis
	Nuskaitymas(skaičiai, n);
	cout << "Skaičių masyve: " << n << endl;
	return 0;
}