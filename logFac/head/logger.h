#pragma once
#include <string>
#include "log_output.h"
#include "log_format.h"
#include <memory>
enum Xlog {
    DEBUG,
    INFO,
    ERROR,
    FATAL
};
class Logger {
public:
    void write(Xlog xlog ,const  std::string& log,const std::string& file , int line) ;
    void SetOutput(std::unique_ptr<LogOutput> o) {
        out_ = std::move(o);
    }
    void SetFormat(std::unique_ptr<LogFormat> f) {
        fmt = std::move(f);
    }
    ~Logger() {
    }
private:
    std::unique_ptr<LogOutput> out_;
    std::unique_ptr<LogFormat> fmt;
};
