#include <iostream>
using namespace std;
int main() {
    int ch;
    int count = 0;
    char str[10];
    cin.get(str,10);
    cout << str << endl;
    //ch = cin.get()与getchar() 相似，ch得到字符的ASCII值。
    while (char(ch = cin.get()) != 'q') {
        cout << char (ch);
        count++;
    }
    cout << endl << "Have " << count << endl;
}