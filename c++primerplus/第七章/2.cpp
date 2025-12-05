#include <iostream>
#include <vector>
#include <functional>
using namespace std;
void func1(int a,int b ) {
    cout << a+b << endl;
}
#define zz int
typedef int aa,bb,cc ;
using funb = void (*)(int,int);
int main() {
    const int *p;
    int n = 2;
    p = &n;
    int k = 2;
    p = &k;
    const int &m = n;
    cout << m << endl;
    int arr1[]{1,2,3,4,5};
    vector<int> arr2{1,2,3,4,5};
    vector<int> arr3(arr2.begin(), arr2.end());
    cout << arr3[0] << endl;
    string str;
    getline(cin,str);
    cout << str.size() << endl;
    //函数封装器，可以记录函数有
    function<void(int,int)> tmp = func1;
    tmp(1,2);
    void (*ptr)(int,int) = func1;
    (*ptr)(3,4);
    funb ss = func1;
    funb mm = [](int a,int b ) {
        cout << a+b << endl;
    };
    cout << "-------------------" << endl;
    function<void(int,int)> qq[3]{func1,func1,func1};
    void (*ww[3])(int,int){func1,func1,func1};

    (*ww[0])(2,3);
    ww[1](3,3);
    ww[2](3,4);
    cout << "--------------------" << endl;
    function<void(int,int)> kk = [=](int a,int b ) {
        cout << a+b << endl;
    };
    kk(8,9);
    mm(2,3);
    ss(3,5);
}