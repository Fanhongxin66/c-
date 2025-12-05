#include "iostream"
#include "windows.h"

using namespace std;
#define MAX 29
int main() {

    SetConsoleOutputCP(CP_UTF8);
    // cout << 29 << endl;
    // cout << "MAX的值是"<<MAX << endl;

    unsigned int num1 = 10000000000000000000;
    u_int unme = 1000000000000000000;
    int num2 = 100000000000000000;
    int num ;
    auto name = "小明";
    auto age = 20;
    auto gender = "man";
    cout << name << "的性别是" << gender << endl;
    cout << name << "的年龄是" << age << endl;endl
    float a = 123456789;
    cout << fixed;
    cout << sizeof(a) << endl;
    cout << sizeof(102L) << endl;
    cout << "hhhllll\t范鸿鑫" << endl;
    cout << "hhh\t王梦晶" <<endl;
    string name1 = "范鸿鑫";
    cout << name1 << endl;
    string msg = "我的名字是" + name1 + "，我的年龄是" + to_string(age) + ",我的性别是" + gender;
    cout << msg << endl;
    return 0;

}