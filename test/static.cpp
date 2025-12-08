#include "iostream"
#include "vector"
using namespace std;

void mid(int x ,int y ) {

    static int tmp = 0;
    tmp++;
    cout << tmp << endl;

}

int main() {

    mid(0,0);
    tmp ++;
    mid(0,0);
    mid(0,0);


}