#include <iostream>
using namespace std;

double calculate(double a , double b , double (*ptr)(double,double)) {
    return (*ptr)(a,b);
}
double add(double x, double y) {
    return x + y;
}

int main() {
    double q = calculate(2.5,10.4,add);
    cout << q << endl;

}