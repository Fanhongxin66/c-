#include <iostream>
using namespace std;

void func(const char * ch) {
    cout << ch << endl;
}
void func(const char * ch , int n ) {
    for (int i = 0 ; i < n ; i++) {
        func(ch);
    }
}

int main() {
     func("hello world",5);
}