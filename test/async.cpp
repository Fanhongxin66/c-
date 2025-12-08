#include <iostream>
#include <thread>
#include <future>
using namespace std;
using CallFunc = function<void(int,int)>;
int main() {
    auto fut = async([]->int {
        return 999;
    }
        );
    cout << fut.get() << endl;

}