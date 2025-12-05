#include <iostream>
using namespace std;
struct CandyBar {
    string name;
    double height;
    int kaluli;
};
void Insert() {
    CandyBar * tmp = new CandyBar;
    cout << "Please enter your company name: ";
    getline(cin, (*tmp).name);
    cout << "Please enter the height: ";
    cin >> (*tmp).height;
    cout << "Please enter the kaluli: ";
    cin >> (*tmp).kaluli;
    cout  << (*tmp).name << endl;
    cout << (*tmp).height << endl;
    cout << (*tmp).kaluli << endl;
}
int main() {
    CandyBar snack={
        "Mocha Munch",2.3,350
    };
    cout << snack.name << endl;
    cout << snack.height << endl;
    cout << snack.kaluli << endl;
    Insert();
}