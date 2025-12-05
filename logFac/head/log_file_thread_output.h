#include <thread>
#include "log_file_output.h"
#include <queue>
#include <string>
#include <sstream>
class LogFileThreadOutput:public LogFileOutput{
public:
    void Open(const std::string& file) ;
    void Output(std::string str)override;
    void Send(const std::string& str) {
        logs_.push(str);
    };
    void Run() ;
    void Stop() {
        is_exit = true;
    }
private:
    bool is_exit = false;
    std::thread th_;
    std::queue<std::string> logs_;
    std::fstream ofs_;
};