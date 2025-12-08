#include <iostream>
#include <array>
#include <charconv>
using namespace std;
int GetMonoth() {
    int tmp ;
    cin >> tmp;
    return tmp;
}
int main() {
    array<int,13> arr;
    for (int i  = 1 ; i <= 12 ; i++) {
        string ch = "Please enter your " + to_string(i) + "month sale number: ";
        cout << ch ;
        arr[i] = GetMonoth();
    }
    int sum = 0;
    for (auto i  : arr) {
        sum += i;
    }
    return sum;

}