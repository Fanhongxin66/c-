#pragma once
#include <iostream>
#include <ostream>
#include "log_output.h"

class LogConsoleOutput:public LogOutput {
public:
     void output(std::string str)override {
          std::cout << str << std::endl;

     };



};