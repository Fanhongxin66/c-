#include <iostream>
using namespace std;

void  func(string &str) {
    for (auto &c : str) {
        c = toupper(c);
    }
}


int main() {
    cout << "Enter a string: ";
    while (true) {

        string str;
        getline(cin, str);
        if (str == "q") {
            cout << "Bye!" << endl;
            break;
        }
        func(str);
        cout << str << endl;

        cout << "Next a string: ";
    }


}