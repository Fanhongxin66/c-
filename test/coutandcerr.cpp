#include "iostream"
using namespace std;

int main() {
    cout << "cout " << endl;
    cout << "cout output" << endl;
    cerr << "cerr output\n" ;
    cerr << "cerr\n" ;
    // apa.exe 1>1.txt 2>2.txt  把cout输出到1.txt文件里 cerr输出到2.txt里
    // apa.exe > 1.txt 2>&1      把cout和cerr都输出到1.txt中

}