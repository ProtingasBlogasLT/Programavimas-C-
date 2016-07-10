#include <string>
using namespace std;

void stringKonstruktoriai()
{
	// tuščia eilutė
	string s;

	// string kopija
	string s1("C++ kalba");
	string s2(s1);
	
	cout << "s1 = " << s1 << endl
		<< "s2 = " << s2 << endl;

	// string kopija nuo elemento n, iš simbolių k 
	string s3(s1, 4, 5);

	cout << "s1 = " << s1 << endl
		<< "s3 = " << s3 << endl;
}

void ObjektuPriskyrimas()
{
	/* string objektui galima priskirti (=) kito string objekto,
	* C eilutės ar netgi vieno simbolio reikšmę. */

	string s1, s2, s3;
	string s = "12";
	char e[] = "xy";
	char c = 'z';
	s1 = s; s2 = e; s3 = c;

	cout << "s1 = " << s1 << endl
		<< "s2 = " << s2 << endl
		<< "s3 = " << s3 << endl;
}

void ObjektuSudetis()
{
	/* Sudėti (+) galima ne tik du string objektus, bet
	 * ir string objektą su C eilute ar su simboliu. */

	string s1 = "a", s2 = "b", s3 = "c";
	string s = "12";
	char e[] = "xy";
	char c = 'z';

	s1 = s1 + s;
	s2 = e + s2;
	s3 = s3 + c;

	cout << "s1 = " << s1 << endl
		<< "s2 = " << s2 << endl
		<< "s3 = " << s3 << endl;
}

void ObjektuPalyginimas()
{
	/* Lyginti (==, !=, < ir kt.) galima ne tik du string
	 * objektus, bet ir string objektą su C eilute,
	 * tačiau negalima lyginti su atskiru simboliu. */

	string s1 = "namas", s2 = "namukas";
	char e[] = "namelis";

	bool b1 = s1 > s2,
		b2 = s1 < e;

	if (b1 == true)
		cout << "b1 yra tiesa\n";
	else
		cout << "b1 yra netiesa\n";

	if (b2 == true)
		cout << "b2 yra tiesa\n";
	else
		cout << "b2 yra netiesa\n";
}

void ObjektoIlgioNustatymas()
{
	/* Paskirtis: grąžina string objekto ilgį (objekto
	 * eilutėje saugomų simbolių skaičių). */

	string s("C++ kalba");
	int n = s.length();

	cout << "n = " << n << endl;
}

void SimboliuIsrinkimasIsStringObjektu()
{
	/* Iš string objekto galima išrinkti ([]) vieną simbolį. */

	string s("C++ kalba");
	char c1 = s[0];
	char c2 = s[s.length() - 1];

	cout << "c1 = " << c1 << endl
		<< "c2 = " << c2 << endl;
}

void Pavyzdys()
{
	string s1;
	string s2 = "naršyti internete";
	string s3("Aš mėgstu programuoti.");
	string s4(s3, 0, 9); // kopijuoja pirmus 9 simbolius
	string s5(s3, 10, 12);
	s1 = s4 + " " + s2 + " ir " + s5;

	cout << "s1 = " << s1 << endl;
}

void Konversija()
{
	// C++ eilutė
	string s("programavimas");

	// C eilutė
	s.c_str();
}