#include <iostream>
using namespace std;
int main() {
    double Da = 100;
    double Cl = 100;
    int year = 0;
    while (Da >= Cl) {
        Da += 100 *0.1;
        Cl = Cl * 1.05;
        year++;
    }
    cout << year << endl;
    cout << Da << endl;
    cout << Cl << endl;



}