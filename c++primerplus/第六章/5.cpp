#include <iostream>
#include <array>
using namespace std;

int main() {
    array<double,10> arr;
    double sum = 0;
    double tmp ;
    int i = 0,j = 0,number =0  ;

    while (cin >> tmp) {
        arr[i++] = tmp ;
        sum += tmp ;
    }
    for ( ; j < i;j++) {
        if (arr[j] > sum / i )number++;
    }
    cout << sum / i << endl;
    cout << number << endl;

}