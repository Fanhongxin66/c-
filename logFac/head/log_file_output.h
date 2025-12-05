#pragma once
#include "log_output.h"

#include <fstream>

class LogFileOutput:public LogOutput {
public:
    bool Open(const std::string& file);
    void output(std::string str)override;

    ~LogFileOutput() {
        ofs_.close();
    };
private:
    std::ofstream ofs_;
};
