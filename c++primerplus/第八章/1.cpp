#include <iostream>
using namespace std;

double func1(double &x ) {
    return x;
}
struct free_throws {
    string name;
    int age;
};
const free_throws   func2(free_throws & th){
    free_throws throws;
    throws = th;
    throws.name = "jack";
    throws.age = 16;
    return throws;
}
int main() {
    free_throws th;
    free_throws mm = func2(th);
    cout << mm.name << endl;
    cout << mm.age << endl;
    return 0;
}