#include "iostream"
using namespace std;
enum class LogLevel{
    DEBUG,
    INFO,
    ERROR,
    FATAL
};

int main() {
    auto loglevel = LogLevel::INFO;
    cout << (int)loglevel << endl;
    loglevel = LogLevel::FATAL;
    cout << (int)loglevel << endl;
    return 0;



}