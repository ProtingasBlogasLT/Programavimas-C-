#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian");
	int a, b, suma;
	cout << "Įveskite du skaičius: ";
	cin >> a >> b;
	suma = a + b;
	cout << "Skaičių suma: " << suma << endl;
	return 0;
}