#include "fstream"

#include <iostream>

#include "string"

#include "string"
using namespace  std;

int main() {
    string filename = "test1.txt";
    fstream ofs(filename,ios::out | ios::binary);
    string s = "Hello World!";
    ofs.write("Hello world",11);
    ofs.close();
    fstream rfs(filename,ios::in | ios::binary);
    char str[1024]{0};
    rfs.read(str,11);
    cout << rfs.gcount() << endl;
    cout << str << endl;
    rfs.clear();
    fstream ifs(filename,ios::in | ios::binary | ios::ate) ;
    cout << ifs.tellg() << endl;
    string line;
    while (true) {
        getline(ifs,line);
        if (!line.empty()) {
            cout << line << endl;
        }
        ifs.clear();
    }
    ifs.close();
    return 0;
}