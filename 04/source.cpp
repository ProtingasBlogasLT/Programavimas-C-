#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian");
	int a, b;
	char veiksmas;
	cout << "Įveskite skaičių, veiksmą ir skaičių: ";
	cin >> a >> veiksmas >> b;
	cout << endl << "Atsakymas: ";

	if(veiksmas == '+')
		cout << a + b;
	else if (veiksmas == '-')
		cout << a - b;
	else if (veiksmas == '*')
		cout << a * b;
	else if (veiksmas == '/')
		cout << a / b;
	else
		cout << "veiksmas parinktas blogai, negalima skaičiuot";

	cout << endl;

	return 0;
}