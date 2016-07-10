#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian");

	int amzius = 18, pazymejimas = 1;	// pazymejimas: 1 (turi), 0 (neturi)

	if (amzius >= 18 && pazymejimas == 1)
		cout << "Atitinki reikalavimus\n";
	else
		cout << "Išeik\n";

	return 0;
}