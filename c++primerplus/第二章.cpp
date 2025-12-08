#include <iostream>
using namespace std;
void Func1(void) {
    cout << "Three blind mice" << endl;
}
void Func2(void) {
    cout << "See how thry run" << endl;
}
void Fun3(int age) {
    cout << age * 12 << endl;
}
int main() {
    //1.显示姓名与地址
    string name = "John";
    string address = "donghui";
    cout << name << " " << address << endl;
    //2.转码
    cout << "Please enter your distance: ";
    int distance;
    cin >> distance;
    cout << distance/220 << endl;
    //3.编写一个c++程序
    Func1();
    Func1();
    Func2();
    Func2();
    //4.输入年龄，输出月数
    cout << "Please enter your age: ";
    int age;
    cin >> age;
    Fun3(age);
}