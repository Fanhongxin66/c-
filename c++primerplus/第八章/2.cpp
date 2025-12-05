#include <iostream>
using namespace std;
void song(const char * name = "O. My Papa",int times = 1);
void iqueote(int a);
void iqueote(double a);
void iqueote(string str);
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void func1(box & b) {
    cout << b.maker << endl;
    cout << b.height << endl;
    cout << b.width << endl;
    cout << b.length << endl;
}
box &  func2(box &b) {
    b.volume = b.width * b.height * b.length;
    return b;
}
double mass(double density , double volume = 1);

void repeat(int n,string str);
void repeat(string str);
int average(int a, int b );
double average(double a , double b );
char mangle(char ch[]);
char * mangle(const char * ch);
template<typename T>
T & Max(T &a, T &b) {
    return a > b ? a : b;
}
template<typename box>
box & MAx(box &b1, box &b2) {
    return func2(b1).volume > func2(b2).volume ? b1 : b2;
}
int main() {

}