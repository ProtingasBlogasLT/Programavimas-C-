#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    cout << "1 - Pienas\n2 - Limonadas\n";
    int pasirink;
    cin >> pasirink;

    if (pasirink == 1)
        cout << "PIENASSSSSSS\n";
    else if (pasirink == 2)
        cout << "LIMONADASSSSS\n";
    else
        cout << "niekas\n";

    return 0;
}