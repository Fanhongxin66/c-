#include "iostream"
using namespace std;

int main() {
    while (true) {
        int x = 0 ;
        cout << "Input your choice: ";
        cin >> x;
        if (cin.fail()) {
            cin.clear();
            string input;
            getline(cin, input);
            cout << "cin fail:" << input << endl;
            continue;
        }
        cout << x << endl;

    }
    while (true) {
        string input;
        getline(cin,input);
        cout << input << endl;

    }

}