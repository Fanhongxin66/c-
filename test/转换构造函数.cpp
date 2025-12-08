#include "iostream"
using namespace std;
class A {
    public:
    A(){ cout << "1" << endl; }
    A(int){cout << "2" << endl;}
    explicit A(int,int){cout << "3" << endl;}
    int k = 3;
private:
    int x = 2;
};
class B:public A {
    public:
    B():A(3){ cout << "4" << endl; }
    B(int){cout << "5" << endl;}
private:
    int y{ 6 };
};

int main() {
    A a;
    B d;
    cout << "----------------" << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(d) << endl;
}