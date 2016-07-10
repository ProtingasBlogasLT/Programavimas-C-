#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Lithuanian");
 
    cout << "Įveskite skaičių, veiksmą, skaičių.\n";
    double a, b;
    char veiksmas;
    cin >> a >> veiksmas >> b;
    cout << "\nAtsakymas: ";
 
    switch (veiksmas)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Blogas veiksmas.";
        break;
    }
    cout << endl;
 
    return 0;
}