#include <iostream>
#include "KonteinerineKlase.h"
using namespace std;

int main()
{
	KonteinerineKlase Objektas;
	
	Objektas.DėtiDuom("Kazkas", 5);
	cout << Objektas.ImtiKiek();
	cout << Objektas.ImtiPav();

	Klase objektukas;
	objektukas.DėtiDuom(14, 5);

	Objektas.DetiObjekta(objektukas);

	Objektas.ImtiObjekta(0).ImtiKint();
	Objektas.ImtiObjekta(0).ImtiKint2();

	return 0;
}