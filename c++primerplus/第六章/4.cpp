#include <iostream>
using namespace std;
int main() {
    char ch;
    while ((ch = cin.get()) != '@') {
        if (ch >= 'a') {
            ch -= 'a' - 'A';
        }
        else if (ch <= 'Z') {
            ch += 'a' - 'A';
        }
        cout << static_cast<char>(ch) ;

    }

}