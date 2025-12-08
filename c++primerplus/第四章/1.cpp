#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
namespace test {
    enum   {
        blue,
        green,
        black
    };
}
enum class test2 {
    black,
    green,
    blue
};
int main() {
    int  a = test::blue;
    int c = test::green;
    cout << a << endl;
    test2 b = test2::blue;
    cout << static_cast<int> (b) << endl;
    cout << &a << endl;
    cout << &c << endl;
    int arr[] = {1, 2, 3, 4, 5};
    cout << *(arr + 4) << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    int * p = new int(5);
    int * q = new int [5]{0,1,2,3,4};
    cout << "---------" << endl;
    cout << &q[0]  << endl;
    cout << &q[1] << endl;
    auto ptr =q;
    cout << *(q+1) << endl;
    int (* pas)[5] =&arr;
    cout << *ptr << endl;

    delete [] q;
    cout << *p << endl;
    delete [] p;
    p = nullptr;
    cout << "--------------" << endl;
    short tell[10];
    cout << tell << endl;
    cout << &tell << endl;
    int l[100] = {1};
    int (*amp)[100] = &l;
    const char * s = "Hello World";
    int len = std::strlen(s);
    char wudi[len+1];

    strcpy(wudi,s);
    cout << wudi << endl;
    wudi[0] = 'h';
    cout << wudi << endl;
    cout << s << endl;
    cout << &s << endl;
    cout << "-================== " << endl;
    string str1 = "Hello World";
    string str2 = str1;
    cout << str1 << endl;
    cout << &str1 << endl;
    cout << str2 << endl;
    std::vector<int> v(5);
    cout << &str2 << endl;



}