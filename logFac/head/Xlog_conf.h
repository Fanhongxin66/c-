#pragma once
#include <string>
#include "map"
#include "log_conf.h"
/*
log_type=console
log_file=test.txt
log_level=debug
*/
class XlogConf: public LogConf {
    public:
    void Read(const std::string& file)override;
    std::string& Get(const std::string& key);
private:
    std::map<std::string,std::string> conf;
};