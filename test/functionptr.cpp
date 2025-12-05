#include <iostream>
#include <functional>
using namespace std;

void functionptr(int a , int b ) {
    cout << a+b << endl;
}
class DATA {
public:
    void add(int a , int b) {
        cout << a+b << endl;
    }
    void call() {
        ptr = &DATA::add;
        ptr((*this),3,5);
        ptr2(1,2);
    }
    //可以设置不同
    void setFunc(function<void(int,int)> o) {
        ptr2 = o;
    }
private:
    function<void(DATA&,int,int)> ptr{nullptr};
    function<void(int,int)> ptr2{nullptr};

};
using FUNCTIONPTR = int(*)(int,int);
int main() {
    {
        //使用bind来封装全局函数，第一个参数是函数地址，之后是函数的参数，可以设置默认值，_1的的意思是把下面传实参的位置做为当前的形参的值。
        auto ptr1 = std::bind(functionptr,3,std::placeholders::_1);
        ptr1(4);
        //使用bind来封装类的局部函数，第一个参数是函数地址，第二个是对象地址，之后是形参（和全局函数一样了）
        DATA data;
        auto ptr2 = std::bind(&DATA::add,&data,std::placeholders::_1,std::placeholders::_2);
        ptr2(3,4);
        auto bfun = std::bind(&functionptr,5,std::placeholders::_2);
        data.setFunc(bfun);
        data.call();
    }
    getchar();
    {
        // 全局函数指针
        function<void(int,int)> fun1 = functionptr;
        fun1(1,2);
        //类的函数指针
        function<void(DATA&,int,int)> data1;
        data1 = &DATA::add;
        DATA data;
        data1(data,3,5);
        data.call();
    }

    // functionptr(5,6);
    // void(*ptr)(int,int);
    // ptr = functionptr;
    // ptr(1,2);
    // FUNCTIONPTR ptr2=functionptr;
    // ptr2(3,4);
    // string str1 = "Hello World";
    // string str2(move(str1));
    // cout << str1 << endl;
    // cout << str2 << endl;
    return 0;

}