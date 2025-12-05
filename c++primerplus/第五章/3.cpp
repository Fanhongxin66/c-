#include <iostream>
using namespace std;
int main() {
    int min,max,sum;
    cout << "Please enter the value of minimum and maximum value" << endl;
    cin >> min >> max;
    while (min <= max) {
        sum += min;
        min++;
    }
    cout << sum << endl;

}