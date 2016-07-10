#include <iostream>
#include <string>
#include "eiluciu-tipai.h"
#include "klase-string.h"
#include "eiluciu-ivedimas-isvedimas.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian");

	/*Eilučių tipai */
	EiluciuTipai();


	/* Klasė string */

	cout << "----- Konstruktoriai -----\n\n";
	stringKonstruktoriai();

	cout << "\n\n----- Objektų priskyrimas -----\n\n";
	ObjektuPriskyrimas();

	cout << "\n\n----- Objektų sudėtis -----\n\n";
	ObjektuSudetis();

	cout << "\n\n----- Objektų palyginimas -----\n\n";
	ObjektuPalyginimas();

	cout << "\n\n----- Objekto ilgio nustatymas -----\n\n";
	ObjektoIlgioNustatymas();

	cout << "\n\n----- Simbolių išrinkimas iš string objektų -----\n\n";
	SimboliuIsrinkimasIsStringObjektu();

	cout << "\n\n----- PAVYZDYS -----\n\n";
	Pavyzdys();

	cout << "\n\n----- Konversija -----\n\n";
	Konversija();


	/* Eilučių įvedimas ir išvedimas */

	cout << "\n\n----- Įvedimas naudojant įvesties srauto operatorių -----\n\n";
	IvedimasNaudojantIvestiesSrautoOperatoriu();

	cout << "\n\n----- Įvedimas naudojant getline -----\n\n";
	IvedimasNaudojantGetline();

	cout << "\n\n----- Išvedimas naudojant išvesties srauto operatorių -----\n\n";
	IsvedimasNaudojantIsvestiesSrautoOperatoriu();

	return 0;
}