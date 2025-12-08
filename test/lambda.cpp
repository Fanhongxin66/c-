#include <iostream>
#include <functional>
using namespace std;

class DATA {

    public:
    void sum(int a,int b) {
        cout << a+b << endl;
    }
    void call(function<void()> func) {
        func();
    }
    void testcall() {
        function<void()> funb = [this] {
            sum(3,5);
        };
        funb();
    }
};
void sum() {
    cout << "a+b" << endl;
}
int main() {
    auto func1 = []{cout << "test lambda" << endl;};
    func1();
    // auto 函数名 = ->限定返回类型 { }；
    auto func2 = []->string {
        return "test lambda";
    };
    auto str2 = func2();
    auto str1 = "test lambda";
    cout << str2 << endl;
    cout << &str2 << endl;
    //lambda函数里的作用域与外部是不相关的，在[]里写=，会把函数内部需要用的参数，从外部复制一份，&是直接引用了。
    [&] {
        cout << str2 << endl;
        cout << &str2 << endl;

    }();
    [=] {
        cout << str2 << endl;
        cout << &str2 << endl;

    }();
    //除了str1是引用，其他参数都是复制一份。
    //需要确保在使用lambda函数时，引用变量是存在的。
    [=,&str1] {
        cout << str1 << endl;
        cout << &str1 << endl;
    };
    // 使用lambda，[]传入对象地址，就可以访问对象里的函数。func()的功能和data1.sum的功能是相同的。
    DATA data1;
    auto func = [&data1] {
        data1.sum(1,2);
    };
    func();
    data1.sum(1,2);
    data1.testcall();
    data1.call(sum);
    data1.call(func);
    return 0;
}