#include "string_vector.h"
#include <iostream>
using namespace std;

int main() {
    StringVector vec(10);
    vec.Push("test1 001");
    vec.Push("test2 002");
    vec.Push("test3 003");
    vec.Push("test4 004");
    vec.Push("test5 005");
    vec.Push("test6 006");
    cout << vec.Capacity() << endl;
    cout << vec.size() << endl;

}