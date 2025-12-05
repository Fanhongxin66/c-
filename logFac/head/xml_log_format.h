#include "log_format.h"

class XmlLogFormat : public LogFormat {
public:
    std::string Format(const std::string& level,const std::string& log ,const std::string& file , int line)override;
};