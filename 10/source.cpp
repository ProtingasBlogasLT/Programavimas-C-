#include <iostream>
using namespace std;
 
int Suma(int a, int b);
void Ivedimas(int & a, int & b);
 
int main() {
 
    int a, b;
 
    /*cout << "Iveskite du skaicius: ";
    cin >> a >> b;*/
 
    Ivedimas(a, b);
    cout << Suma(a, b);
    cout << endl;
 
    return 0;
}
 
int Suma(int a, int b) {
    // int suma = a + b;
    // return suma;
    return a + b;
}
 
void Ivedimas(int & a, int & b) {
    cout << "Iveskite skaicius a ir b: ";
    cin >> a >> b;
}