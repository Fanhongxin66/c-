#include <fstream>
#include <iostream>
using namespace std;
int main() {
    std::ofstream ofs("test.txt",std::ios::app | std::ios::out | std::ios::binary);
    if (ofs.is_open())cout << "open success" << endl;
    ofs << "Hello World!\n";
    ofs.close();
    if (!ofs.is_open())cout << "close success" << endl;

}
