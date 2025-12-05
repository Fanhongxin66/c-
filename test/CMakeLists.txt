cmake_minimum_required(VERSION 4.0)
project(c__project)

set(CMAKE_CXX_STANDARD 17)

add_executable(c__project
        work.cpp
        work2.cpp
        work1.cpp
        信息程序.cpp
        数组.cpp
        test/common.hpp
        test/11.cpp
        test/student.cpp
        vector.cpp
        enum.cpp
        "main 参数.cpp"
        测试日志.cpp
        cmake-build-debug/vector.cpp
        base16.cpp
        static.cpp
        编译/func.cpp)
