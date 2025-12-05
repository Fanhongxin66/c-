#include <iostream>
using namespace std;

struct CandyBar {
    string name;
    double weight;
    int hot;
};

void func(CandyBar &b1,
    const char * ch = "Millennium Munch",
    double a = 2.85,int hot = 350)
{
    b1.name = ch;
    b1.weight = a;
    b1.hot = hot;
    cout << b1.name << " " << b1.weight << " " << b1.hot << endl;
}

int main() {
    CandyBar b1;
    func(b1,"HEll");



}