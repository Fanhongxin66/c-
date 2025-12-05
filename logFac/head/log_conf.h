#pragma once
#include <string>
/*
log_type=console
log_file=test.txt
log_level=debug
*/
class LogConf {
public:
    virtual void Read(const std::string& file)= 0 ;

};