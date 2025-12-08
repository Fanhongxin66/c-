#include <windows.h>

#include "iostream"
using namespace std;

void find_money(string name, int money) {
    cout << "-------------find_money----------" << endl;
    cout << name << ",hello,your money is " << money << endl;
}
void save_money(string name,int money) {
    cout << "-------------save_money------------" << endl;
    cout << "Please input your money:" << endl;
    int tem;
    cin >> tem;
    cout << name << ", hello,succeed saving " << money << endl;
    money += tem;
    cout << name << "，hello,your money is " << money << endl;
}
void get_money(string name, int money) {
    cout << "-------------get_money------------" << endl;
    cout << "Please uut your money:" << endl;
    int tem;
    cin >> tem;
    cout << name << "hello,succeed getting money" << money << endl;
    money += tem;
    cout << name << "hello,your money is " << money << endl;
}
int menu_money(string name) {
    cout << "--------menu---------" << endl;
    cout << name << "welocome ATM, please choice" << endl;
    cout << "find money send 1" << endl;
    cout << "save money send 2" << endl;
    cout << "get money send 3" << endl;
    cout << "pause money send 4" << endl;
    int tem ;
    cout << "Please input your choice:";
    cin >> tem;
    return tem;
}
int main() {

    int choice ;
    choice = menu_money("zhoujielun") ;
    if (choice == 1) {
        find_money("zhoujielun",50000);

    }
    if (choice == 2) {
        save_money("zhoujielun",50000);
    }
    if (choice == 3) {
        get_money("zhoujielun" ,50000);
    }
    else {
        return 0;

    }
    return 0;
}