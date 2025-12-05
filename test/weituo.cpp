#include "iostream"
using namespace std;

class Logger {
public:
    Logger() {
        cout << "Create Logger" << endl;
    };
    ~Logger() {
        cout << " Drop Logger" << endl;
    }
};
//单件模式
class LogFac {
public:
    ~LogFac() {
        cout << "LogFac::~LogFac()" << endl;
    }
    static LogFac& instance() {
        static LogFac tmp;
        return tmp;
    }
private:
    LogFac() {cout << "LogFac::LogFac()" << endl;}
    Logger log;


};
int main() {
    LogFac::instance();
}