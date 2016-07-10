#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Lithuanian");
     
    cout << "Pasirinkite:\n1-Kola\n2-Sprite\n3-Fanta\n";
    int pasirinkimas;
    cin >> pasirinkimas;
 
    switch (pasirinkimas)
    {
    case 1:
        cout << "Kola.";
        break;
    case 2:
        cout << "Sprite.";
        break;
    case 3:
        cout << "Fanta.";
        break;
    default:
        cout << "Niekas.";
        break;
    }
 
    cout << endl;
 
    return 0;
}