#include "../head/log_fac.h"
#include <string>
#include "../head/log_console_output.h"
#include "../head/log_file_output.h"
#include "../head/log_output.h"
#include "../head/xml_log_format.h"
using namespace std;

void LogFac::Init(const std::string &file) {
    conf.Read(file);

    string log_type = conf.Get("log_type");
    string log_file = conf.Get("log_file");
    string log_level = conf.Get("log_level");
    string log_format = conf.Get("log_format");
    if (log_format == "xml") {
        logger_.SetFormat(move(make_unique<XmlLogFormat>()));
    }
    else if (log_format == "x") {
        logger_.SetFormat(move(make_unique<XLogFormat>()));
    }
    auto fout = make_unique<LogFileOutput>();
    bool tag = fout->Open(log_file);
    cout << log_file << endl;
    if (tag) cerr << "1" << endl;
    else cerr << "0" << endl;
    if (log_type == "console") {
        logger_.SetOutput(make_unique<LogConsoleOutput>());
    }
    else if (log_type == "file") {
        fout->Open(log_file);
        logger_.SetOutput(move(fout));
    }
    Xlog levelstr =Xlog::DEBUG;
    if (log_level == "info") {
        levelstr = Xlog::INFO;
        logger_.write(levelstr,"test1",__FILE__,__LINE__);
    }
    else if (log_level == "ERROR") {
        levelstr = Xlog::ERROR;
        logger_.write(levelstr,"test1",__FILE__,__LINE__);
    }
    else if (log_level == "fatal") {
        levelstr = Xlog::FATAL;
        logger_.write(levelstr,"test1",__FILE__,__LINE__);
    }
    logger_.write(levelstr,"test1",__FILE__,__LINE__);

}
