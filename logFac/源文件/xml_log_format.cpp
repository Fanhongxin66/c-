#include "../head/xml_log_format.h"
#include <sstream>
std::string XmlLogFormat::Format(const std::string& level,const std::string& log ,const std::string& file , int line){
    std::stringstream ss;
    ss << "<" << level << ">" << log << " "<< file << " "<< line << "<" << level <<">" << std::endl;
    return ss.str();
};