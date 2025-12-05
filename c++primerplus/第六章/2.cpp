#include <iostream>
using namespace std;
int main() {
    int x;
    cin >>  x;
    switch (x) {
        case 1: {
            cout << "Hello World!";
            cout << x << endl;
            break;
        }
        case 2: {
            cout << "Hello World!";
            cout << x << endl;
            break;
        }
    }
    string str;
    getline(cin,str);
    char ch[200];
    cin.getline(ch,20);
    char cn;
    while (cin.get(cn)) {
        cout << cn;
    }

}