#include <string>
using namespace std;

void IvedimasNaudojantIvestiesSrautoOperatoriu()
{
	/* Įvesties srauto operatorius: >>
	 * Su juo galima įvesti iš konsolės arba nuskaityti
	 * iš failo. Jis nuskaito iki pirmo tarpo. */

	string s1, s2;
	cin >> s1 >> s2;

	cout << "s1 = " << s1 << endl
		<< "s2 = " << s2 << endl;
}

void IvedimasNaudojantGetline()
{
	/* Nuskaito visą eilutę pilnai arba iki tam tikro simbolio.
	 * Aprašymas: getline(nuskaitymo_metodas, kintamsis, simbolis) */

	string s;
	getline(cin, s, ',');

	cout << "s = " << s << endl;
}

void IsvedimasNaudojantIsvestiesSrautoOperatoriu()
{
	/* Išvesties srauto operatorius yra <<, su juo galima
	 * išvesti į konsolę arba failus. */

	string s = "Teksto eilute";
	cout << s << endl;
}