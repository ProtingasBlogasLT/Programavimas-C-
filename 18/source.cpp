/*
UŽDUOTIS: Rasti kurioje objektų masyvo vietoje yra nurodyta reikšmė
Protingasblogas.lt
*/

#include <string>
#include <iostream>
using namespace std;
const int n = 5;	// prekių skaičius

class Prekės
{
public:
	string pavadinimas;
	double kaina;
	void Dėti(string pav, double kain) { pavadinimas = pav; kaina = kain; }
};

void SudetiPrekesIMasyva(Prekės p[]);
int PaieskaMasyve(Prekės p[], int n, string pav);

int main()
{
	setlocale(LC_ALL, "Lithuanian");
	Prekės p[n];
	SudetiPrekesIMasyva(p);
	cout << PaieskaMasyve(p, n, "Duona") << endl;
	return 0;
}

/* Tiesiog sudedu duomenis į masyvą, kad galėčiau su jais dirbti
p[] - masyvas į kurį dedu duomenis */
void SudetiPrekesIMasyva(Prekės p[])
{
	p[0].Dėti("Sausainiai", 1.29);
	p[1].Dėti("Traškučiai", 2.99);
	p[2].Dėti("Duona", 1.59);
	p[3].Dėti("Šlepetės", 5.99);
	p[4].Dėti("Cukrus", 0.89);
}

/* Ieško nurodytos reikšmės masyve
p[] - masyvas, kuriame vyksta paieška
n - objektų skaičius masyve
pav - duotoji reikšmė, galima duoti ir kitą tipą jei ieškom ne pavadinimo */
int PaieskaMasyve(Prekės p[], int n, string pav)
{
	for (int i = 0; i < n; i++)
	{
		if (p[i].pavadinimas == pav)
			return i;
	}
	return -1;
}