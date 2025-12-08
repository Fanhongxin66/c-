#include <iostream>
using namespace std;
int A = 5;
extern int A;
void func1() {
    int A = 20;
    cout << "Local variable A = " << A << endl;
    //::代表使用的是全局变量A,
    ::A++;
    cout << "Global variable A = " << ::A << endl;
}
struct Student {
    mutable string name;
    mutable int age;
    int gender;

};


int main() {
    A = 10 ;
    cout  << A << endl;
    const int * p = nullptr;
    cout << "p = " << p << endl;
    func1();
    const Student stu{"Jack",25,1};
    stu.name = "Fuck";
}