#include "log.h"
#include "iostream"
#include "string"
#include "sstream"
#include "fstream"
using namespace std;
static ostream logstr(cout.rdbuf());
void SetLogBuf(streambuf* buf) {
    logstr.flush();
    logstr.rdbuf(buf);
}
void LogWrite(string info,string level,string name,int line) {
    logstr << __TIME__ << " " <<info << " " << level << " " << name << " " << line << " "  << "\n";
}
void OutputToFile(string logtype,string logname,string log) {
    fstream ofs(logname,ios::out | ios::app | ios::binary);
    SetLogBuf(ofs.rdbuf());
    if (logtype == "debug") LOGDEBUG(log);
    else if (logtype == "info") LOGINFO(log);
    else if (logtype == "error") LOGERROR(log);
    else LOGFATAL(log);
    ofs.close();
}
void LogInit(std::string where,std::string log,std::string logtype , std::string logname ) {
    if (where == "file") {
        OutputToFile(logtype,logname,log);
    }
    else {
        if (logtype == "debug") LOGDEBUG(log);
        else if (logtype == "info") LOGINFO(log);
        else if (logtype == "error") LOGERROR(log);
        else LOGFATAL(log);
    }
}
UserMsg GetUserMsg() {
    UserMsg usermsg;
    cout << "Please input your where(file or cmd)" << endl;
    string where;
    cin >> where;
    cout << "Please input your  logtype" << endl;
    string logtype;
    cin >> logtype;
    cout << "Please input your logname" << endl;
    string logname;
    cin >> logname;
    cout << "Please input your log" << endl;
    string log;
    cin.ignore();
    getline(cin, log);
    usermsg.where = where;
    usermsg.logtype = logtype;
    usermsg.logname = logname;
    usermsg.logname = logname;
    usermsg.log = log;
    return usermsg;
}