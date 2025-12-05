#include "log.h"
#include "iostream"
using namespace std;

int main() {
    UserMsg usermsg;
    usermsg = GetUserMsg();
    LogInit(usermsg.where,usermsg.log,usermsg.logtype,usermsg.logname);

}