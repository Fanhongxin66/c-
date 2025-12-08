#include <complex>

#include "iostream"
using namespace std;

enum class LogLevel {
    Debug,Info,Error,Fatal,
};

int main(int argc,char *argv[]) {
    int status;
    //默认Debug以上都显示
    int logLevel = (int)LogLevel::Debug;
    logLevel = 0;
    if (argc > 1) {
        string levelStr = argv[1];
        if (levelStr == "Info") {
            logLevel = (int)LogLevel::Info;
        }
        else if (levelStr == "Error") {
            logLevel = (int)LogLevel::Error;
        }
        else if (levelStr == "Fatal") {
            logLevel = (int)LogLevel::Fatal;
        }
    }
    cout << "sdadasdads"<<endl;
    system("pause");
    system("cls");
    system("dir");
    cout << ">>";
    string cmd;
    cin >> cmd;

    system(cmd.c_str());

    status = (int)LogLevel::Fatal;
    {
        if (logLevel <= status) {
            cout << __FILE__ <<"Fatal" << __LINE__<< endl;
            status = (int)LogLevel::Error;
        }
        if (logLevel <= status){
            cout << "Error" << endl;
            status = (int)LogLevel::Info;
        }
        if (logLevel <= status){
            cout << "Info" << endl;
            status = (int)LogLevel::Debug;
        }
        if (logLevel <= status){
            cout << "Debug" << endl;
        }

    }

}