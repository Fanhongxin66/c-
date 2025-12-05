#include "../head/Xlog_conf.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
/*
log_type=console
log_file=test.txt
log_level=debug
*/
static inline void rstrip(std::string& s) {
    while (!s.empty() && (s.back()=='\r' || s.back()==' ' || s.back()=='\t')) s.pop_back();
}
void XlogConf::Read(const std::string& file) {
    ifstream ifs(file,std::ios::in | std::ios::binary);
    if (!ifs.is_open()) {std::cout << "error opening file " << file << endl; return;}
    string line,k,v;
    for (;;) {
        getline(ifs,line);
        auto tmp = line.find('=');
        if (tmp <= 0 ) continue;
        k = line.substr(0,tmp);
        v = line.substr(tmp+1);
        rstrip(k); rstrip(v);
        conf[k] = v;
        if (ifs.eof())break;
    }
}
std::string& XlogConf::Get(const std::string& key)  {
    auto it = conf.find(key);
    string tmp = "";
    return it->second;
}
