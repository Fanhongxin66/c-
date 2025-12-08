#include "iostream"
#include "sstream"
#include "fstream"
#include "string"
using namespace std;
//用户输入LOGDEBUG("test log 001")
// 生成一条日志：2025-11-4 13：56：30 debug
//可以设置日志输出为控制台、string和文件中
static ostream logstr(cout.rdbuf());
void SetLogBuf(streambuf* buf) {
    logstr.flush();
    logstr.rdbuf(buf);

}
void Logwrite(string log, string level,string name , int line) {
    logstr << __TIME__ << " " << level << " "<< log << " " << name << " "<< line << endl;
}
#define LOGDEBUG(test) Logwrite(test,"Debug", __FILE__,__LINE__)
int main() {

    LOGDEBUG("test log 001");
    LOGDEBUG("test log 002");
    stringstream ss;
    SetLogBuf(ss.rdbuf());
    LOGDEBUG("test log 003");
    cout << ss.str() << endl;
    fstream ofs("log.txt",ios::out|ios::app | ios::binary);
    SetLogBuf(ofs.rdbuf());
    LOGDEBUG("test log 004");
    LOGDEBUG("test log 005");
    ofs.close();

}
