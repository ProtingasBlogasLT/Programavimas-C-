#include <iostream>
using namespace std;
 
double Atsakymas(double sk1, double sk2, char veiksmas);
 
int main() {
 
    setlocale(LC_ALL, "Lithuanian");
    double a, b;
    char veiksm;
    bool dar_karta = true;
 
    while (dar_karta)
    {
        cout << "Įveskite skaičių, veiksmą, skaičių: ";
        cin >> a >> veiksm >> b;
        cout << Atsakymas(a, b, veiksm);
        cout << "\n\nSkaičiuoti dar kartą? (y/n) ";
        cin >> veiksm;
        if (veiksm == 'n')
            dar_karta = false;
    }
 
    return 0;
}
 
double Atsakymas(double sk1, double sk2, char veiksmas) {
    double ats;
    switch (veiksmas)
    {
    case '+': ats = sk1 + sk2; break;
    case '-': ats = sk1 - sk2; break;
    case '*': ats = sk1 * sk2; break;
    case '/': ats = sk1 / sk2; break;
    default: cout << "Įvyko klaida\n\n\n";
        break;
    }
    return ats;
}