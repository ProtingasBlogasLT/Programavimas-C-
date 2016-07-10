#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    cout << "14 ir 2 suma?\n";
    int ats;
    cin >> ats;

    if (ats == 16) {
        cout << "Teisingai!\n"
             << "Jų sandauga? ";
        cin >> ats;
        if (ats == 28)
            cout << "teisingai\n";
    }

    return 0;
}