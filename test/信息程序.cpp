#include <random>
#include "iostream"
#include "cstdlib"
using namespace std;



int main() {
    system("chcp 65001");

    string name;
    int height,age;
    // cout << "请输入您的姓名：" << endl;
    // cin >> name;
    // cout << "请输入您的身高（CM）" << endl;
    // cin >> height;
    // cout << "请输入您的年龄" << endl;
    // cin >> age;
    // cout << "-----------" << endl;
    // cout<< "信息输入完成，您的信息如下：" << endl;
    // cout << "姓名：" << name << endl;
    // cout << "身高：" << height << endl;
    // cout << "年龄：" << age << endl;
    //
    /*int get_random_num(int min, int max) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(a:min,b:max);
        return dis(gen);
    }*/
    // int tmp = get_random_num(1,10);
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    for (int num4 : arr) {
        cout << num4 << endl;
    }
    char s[] = "hello world";
    for (char c : s) {
        cout << c;

    }
    cout << sizeof(s) << endl;
    int *p = &arr[9];
    p++;
    cout <<  p << endl;
    int *q = new int;
    *q = 10;
    cout << *q << endl;
    int *m = new int[5];
    m[0] = 0;
    *(m + 1) = 10;
    cout << *(m + 1) << endl;
    cout << m[0] << endl;
    delete q;
    cout  << q << endl;
    delete[] m ;
    cout << *(m+1) << endl;
    int *n = new int[10];
    *n = 10;
    *(n + 1) = 20;
    cout << *n << endl;
    cout << n[0] << endl;
    cout << *(n + 1) << endl;
    cout << n[1] << endl;
    delete[] n ;
    cout << *(n + 1) << endl;
    return 0;
}