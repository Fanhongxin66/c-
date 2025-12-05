#include "../head/xlog_format.h"
#include "sstream"
using namespace std;

std::string XLogFormat::Format(const std::string& level,const std::string& log ,const std::string& file , int line) {
    stringstream ss;
    ss << __DATE__ << " " << __TIME__ << " " << level << " " << log << " " << line << " " << file;
    return ss.str();
}
