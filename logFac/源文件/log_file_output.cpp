#include <string>
#include <fstream>
#include <iostream>
#include "../head/log_file_output.h"
using namespace std;
void LogFileOutput::output(std::string str) {
    ofs_<< str << std::endl;
}
bool LogFileOutput::Open(const std::string& file) {
    ofs_.open(file,ios::app | ios::out);
    if (ofs_.is_open())return true;
    else return false;
}