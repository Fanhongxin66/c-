#include "iostream"

using namespace std;

class Myclass {
    public:

    Myclass():x{2},name_{"Jack"}
    {
        cout << "Myclass::Myclass()" << name_ << endl;
    };
    ~Myclass() {
        cout << "Myclass::~Myclass()" << endl;
    }
    static void sum(int a ,int b ) {
        a = a + y ;
        b = a++;
        cout << a << b << endl;
    }
    static Myclass& instance() {
        static Myclass mc;
        return mc;
    }
    private:
    string name_;
    static int y;
    int x;

};
int Myclass::y = 5;
struct student {
    int a ;
    void sum();

};
int main() {
    Myclass myclass;
    Myclass myclass2;
    myclass.sum(2,4);
    Myclass::instance().sum(5,3);
}