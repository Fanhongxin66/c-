#include "../head/log_file_thread_output.h"
using namespace std;


void LogFileThreadOutput::Open(std::string file) {
    ofs_.open(file,ios::app | ios::out);
    if (!ofs_.is_open())return;
    th_ = thread(&LogFileThreadOutput::Run, this);
}
void LogFileThreadOutput::Output(const string& str) {
    Send(str);
}
void LogFileThreadOutput::Run() {
    while (!is_exit) {
        if (logs_.empty()) continue;
        {
            auto it = logs_.front();
            logs_.pop();
            ofs_<< it << std::endl;
        }

    }
}