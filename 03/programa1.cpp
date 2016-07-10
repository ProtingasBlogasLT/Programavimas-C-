#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Lithuanian");

    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << " didesnis už " << b << endl;
    else if (a < b)
        cout << b << " didesnis už " << a << endl;
    else
        cout << a << " ir " << b << " yra lygūs\n";

    return 0;
}