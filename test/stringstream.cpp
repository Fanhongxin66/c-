#include <iostream>

#include "sstream"
#include  "string"
using namespace std;

int main() {
    stringstream ss;
    ss << "test1\n" << "test2\n" << "test3\n";
    cout << ss.str() << endl;
    string line;
    while (true){
        getline(ss,line);
        cout << line << endl;
        if (ss.eof())break;
    }


    return 0;


}