#include <iostream>
#include <array>
#include <vector>
using namespace std;
struct Fish {
    string name;
    int weight;
    double height;
};
enum Response {
    No,
    Yes,
    Maybe
};
int* Insert() {
    int* tmp = new int;
    cin >> *tmp;
    return tmp;
}

int main() {
    //c++11引入定长数组。
    array<char, 30> actor;
    array<short,100> besie;
    array<float,13> chuck;
    array<long double,64> dipsea;
    array<int,5> arr{1,3,5,7,9};
    const char* ch = "cheeseburger";
    char c[] = "cheeseburger";
    string str = "Waldorf Salad";
    Fish fish = {
        "Jack",20,15.2
    };
    vector<int> vec;
    vec.push_back(*Insert());
    float treacle[10]{0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1};
    cout << *treacle << endl;
    cout << *(treacle + 9) << endl;
    cout << (int * ) "Hello World!" << endl;
}