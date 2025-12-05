#include <iostream>
using namespace std;
int main() {
    char str;
    str = 's';
    //判断字符是不是字母字符
    if (isalpha(str)) {
        cout << str << endl;
    }
    //判断是不是数字字符
    if (isdigit(str)) {
        cout << str << endl;
    }
    //判断是不是空白，比如换行符、空格、制表符
    if (isspace(str)) {
        cout << str << endl;
    }
    //判断是不是标点符号。
    if (ispunct(str)) {
        cout << str << endl;
    }
}