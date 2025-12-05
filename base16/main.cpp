#include <vector>

#include "iostream"
#include "base16.h"
using namespace std;


int main() {
    string str1 = "123HIJK";
    cout << "string:" << str1 << endl;
    vector<unsigned char> data1(str1.begin(), str1.end());
    data1.push_back('\0');
    str1 = Encode(data1);
    cout << "base16Encode:" << str1 << endl;
    auto str2  = DeCode(str1);
    string DecodeStr(str2.begin(), str2.end());
    cout << "base16Decode:" << DecodeStr << endl;

}