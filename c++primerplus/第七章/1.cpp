#include <iostream>
#include <vector>
using namespace std;
void func(vector<int> vec) {
    cout << sizeof(vec) << endl;
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    int a = 5;
    cout << sizeof(&a)<< endl;
    cout << vec[0] << ' ' << vec[1] << ' ' << vec[2] << endl;
};
void funb(int arr[]) {
    cout << sizeof(arr) << endl;
    arr[0] = 10;
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << endl;
};
int main() {
    string str;
    cin >> str;

    cout << str << endl;
    char ch;
    cin >> ch;
    cout << ch << endl;
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    func(vec);
    int arr[]{0,1,2,3,4,5,6,7,8,9};
    funb(arr);
    cout << arr[0] << endl;
    cout << sizeof(&arr) << endl;
}