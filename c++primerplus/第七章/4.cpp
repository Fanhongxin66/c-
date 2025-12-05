#include <iostream>
using namespace std;

double ADD(double a, double b);


int main() {
    double x,y;
    cin >> x >> y;
    while (x != 0 && y != 0) {
        cout << ADD(x, y) << endl;
        cin >> x >> y;
    }

}

double ADD(double a, double b) {
    return 2 * a * b /  (a + b);
}