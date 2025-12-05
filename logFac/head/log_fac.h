#pragma once
#include <string>
#include "Xlog_conf.h"
#include "xlog_format.h"
#include "logger.h"
#include "log_file_output.h"

class LogFac {
public:
    void Init(const std::string& file);
    static LogFac& Instance() {
        static LogFac instance;
        return instance;
    }
private:
    LogFac(){};
    Logger logger_;
    XlogConf conf;
};


