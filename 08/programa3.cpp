#include <iostream>
using namespace std;

int main() {

	char simbolis;
	cout << "Iveskite simboli: ";
	cin >> simbolis;

	for (int i = 1; i < 51; i++)
	{
		if (i % 5 == 0)
			cout << simbolis << endl;
		else
			cout << simbolis;
	}

	cout << endl;

	return 0;
}