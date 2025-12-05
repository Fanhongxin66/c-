#include <iostream>
#include <functional>
#include <memory>
using namespace std;
void fun(int arr) {
    cout << sizeof(arr) << endl;
}
int main() {
    int arr[10]{0};
    cout << sizeof(arr) << endl;
    fun(5);
    int b =10;
    cout << sizeof(&b);
    char ch[] = "Hello world";
    int tmp = 10 ;
    int arr1[tmp];
    char str1[100];
    cin.getline(str1,50);
    cout << str1 << endl;
    string str2;
    getline(cin,str2);
    cout << str2 << endl;
    //R"+*dj\jdjj\djdj\ndj+*" 这是原始字符串，不需要转义字符\就能输出出来。
    //cout << R"+*(\\\\\\\\\n \r\r\r\r\r\r )+*" << endl;
    //函数包装器,可以变成一个函数指针数组
    function<void(int)> func1[] = {fun};
    func1[0](5);
    //创建函数指针 三种方法。
    void (*ptr)(int) = fun;


    auto MMM = make_unique<void(*)(int)>(fun);
    [] {
        cout << "Hello World" << endl;
    }();
    union mm {
        int age;
        short height;
        long gogo;
    };
    //共用体，只能存一个数。
    mm MM;
    MM.age = 11;
    MM.height = 22;
    MM.gogo = 33;
    //输出33 33 33 ，只记录了33这个值。
    cout << MM.age << endl;
    cout << MM.height << endl;
    cout << MM.gogo << endl;

    return 0 ;
}