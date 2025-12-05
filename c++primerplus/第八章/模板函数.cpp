#include <iostream>
//函数模板，多个类型
template <typename T, typename T2>
void Swap (T &a, T2 &b) {
    T temp = a;
    a = b;
    b = temp;;
}
//函数模板重载,int非泛型，而是特定数据类型，一个是整型，一个是数组
template <typename T, typename T2>
void Swap (T &a, T2 &b,int pa,int []) {
    T temp = a;
    a = b;
    b = temp;;
    std::cout << "33" << std::endl;
}
//类模板，多个类型
template <typename T3>
class ss {
    public:
    ss(){std::cout << "Creat success" << std::endl;}
};

//函数模板显示具体化。使用特定数据类型。并非实例化，而是具体化。
template<>
void Swap (int &a,int &b) {
    std::cout << "11" << std::endl;
}
//显示实例化，template后没有尖括号,不能重写函数定义。
template
void Swap (double &a, double &b);
int main() {
    using namespace std;
    int a = 5;
    int b = 10;
    Swap(a, b);
    std::cout << a << std::endl;
    cout << b << endl;
    //比auto更精准，auto可能会没有const。
    const int mm = 5;
    auto kk = mm ;
    kk = 6;
     decltype((mm)) ss = 6;
    cout << &ss << endl;
    cout  << &mm << endl;
    cout << &(mm) << endl;
    decltype(a+2.5) k;
    auto m = a + 2.5;
    cout << sizeof(k) << endl;
    cout << sizeof(m) << endl;
}