#include "iostream"

#include "common.hpp"
class mymsg {
public:
    string name ;
    int age ;
    int get(int a, int b );
    void set(int a, string b);
};
int mymsg::get(int a ,int b) {
    return a*b;
}
void mymsg::set(int a ,string b) {
    age = a;
    name = b;
}
int main() {

    mymsg m;
    m.name ="John";
    m.age = 20;
    int tem = m.get(3,5);
    cout << m.name << m.age << endl;
    m.set(5,"jack");
    cout << m.name << m.age << endl;
    cout << tem << endl;
    return 0;
}