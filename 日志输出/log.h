#pragma once
#include "string"
void LogWrite(std::string info,std::string level,std::string name,int line);
#define LOGDEBUG(log) LogWrite(log,"debug",__FILE__,__LINE__)
#define LOGINFO(log) LogWrite(log,"info",__FILE__,__LINE__)
#define LOGERROR(log) LogWrite(log,"error",__FILE__,__LINE__)
#define LOGFATAL(log) LogWrite(log,"fatal",__FILE__,__LINE__)

void LogInit(std::string where,std::string log,std::string logtype , std::string logname );
void OutputToFile(std::string logtype,std::string logname,std::string log);
struct UserMsg {
    std::string where;
    std::string logtype;
    std::string logname;
    std::string log;
};
UserMsg GetUserMsg();