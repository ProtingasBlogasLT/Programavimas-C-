#include <iostream>
#include <fstream>
using namespace std;

const string DUOM = "duomenys.txt";
const string RE = "rez.txt";

int main()
{
	setlocale(LC_ALL, "Lithuanian");

	// ifstream - nuskaitant
	// ofstream - išvedant

	/*ifstream fin;
	fin.open("duomenys.txt");*/

	int a, b;

	ifstream fin(DUOM);
	fin >> a >> b;
	fin.close();

	ofstream fout(RE);
	fout << b << " " << a << endl;
	fout.close();

	return 0;
}