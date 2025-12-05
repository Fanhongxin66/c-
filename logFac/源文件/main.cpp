#include "string"
#include "../head/log_fac.h"
int main() {
    LogFac::Instance().Init("../log_conf/log.conf");
    // {
    //     XlogConf x;
    //     x.Read("../log_conf/log.conf");
    //     string key = "log_type";
    //     string str = x.Get(key);
    //     cout << str << endl;
    //
    // }
    // {
    //     Logger logger;
    //     string log = "test";
    //     string file = "test.txt";
    //     auto fout = new LogFileOutput();
    //     fout->Open("test.txt");
    //
    //     logger.SetOutput(fout);
    //     logger.SetFormat(new XLogFormat());
    //
    //     logger.write(Xlog::DEBUG,log,file,__LINE__);
    // }
    // XLogFormat xft;
    // LogFileOutput lco;
    // string level = "INFO";
    // string log = "test";
    // string file = "test.txt";
    // lco.Open(file);
    // auto str = xft.Format(level,log,file,__LINE__);
    // lco.output(str);
    // return 0 ;
    /*XLogFormat fmt;
    //const std::string& level,std::string log , std::string& file , int line
    string level = "INFO";
    string log = "test";
    string file = "test.txt";
    auto str = fmt.Format(level,log,file,__LINE__);
    cout << str << endl;
    */
}