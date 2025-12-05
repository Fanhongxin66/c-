#include "../head/logger.h"

#include <iostream>
#include <ostream>
using namespace std;
void Logger::write(Xlog level,const std::string& log, const std::string& file, int line) {
    auto levelstr = "DEBUG";
    switch (level) {
        case Xlog::ERROR:
            levelstr = "ERROR";
            break;
        case Xlog::INFO:
            levelstr = "INFO";
            break;
        case Xlog::FATAL:
            levelstr = "FATAL";
            break;
    }
    //virtual std::string Format(const std::string& level,std::string& log , std::string& file , int line)
    std::string str = fmt->Format(levelstr, log, file, line);
    out_->output(str);
}
