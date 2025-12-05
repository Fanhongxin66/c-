#include <iostream>
using namespace std;
int main() {
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    cout << "t) tree     \tg) game" << endl;
    cout << "Please enter c,p,t or g:";
    char ch;
    cin >> ch;
    switch (ch) {
        case 'c':
        case 'p': cout << "pianist"; break;
        case 't': cout << "tree"; break;
        case 'g': cout << "game"; break;
        default :
            cout << "Please enter c,p,t or g:";
    }



}