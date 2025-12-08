cmake_minimum_required(VERSION 3.10)
project(logFac CXX)

set(CMAKE_CXX_STANDARD 11)

# 列出所有源文件
add_executable(main
        main.cpp
        xlog_format.cpp
        ../head/logger.h
        logger.cpp
        ../head/log_conf.h
        ../head/Xlog_conf.h
        Xlog_conf.cpp
        ../head/log_fac.h
        log_fac.cpp
        ../head/xml_log_format.h
        xml_log_format.cpp
        ../../test/deepcopy.cpp
        ../../test/unique_ptr.cpp
        ../../StringVector/string_vector.h
        ../../StringVector/string_vector.cpp
        ../../StringVector/main.cpp
        ../../test/functionptr.cpp
        ../../test/lambda.cpp
        ../../test/thread.cpp
        ../../test/async.cpp
        ../../test/msg_server.cpp
        ../head/log_file_thread_output.h
        log_file_thread_output.cpp
        ../../test/arr.cpp
        ../../test/string.cpp
        ../../c++primerplus/第二章.cpp
        ../../c++primerplus/第三章/1.cpp
        ../../c++primerplus/第三章/3.7.1.cpp
        ../../c++primerplus/第四章/1.cpp
        ../../c++primerplus/第四章/2.cpp
        ../../c++primerplus/第四章/3.cpp
        ../../c++primerplus/第四章/4.cpp
        ../../c++primerplus/第四章/5.cpp
        ../../c++primerplus/第四章/6.cpp
        ../../c++primerplus/第四章/7.cpp
        ../../c++primerplus/第五章/1.cpp
        ../../c++primerplus/第五章/2.cpp
        ../../c++primerplus/第五章/3.cpp
        ../../c++primerplus/第五章/4.cpp
        ../../c++primerplus/第五章/5.cpp
        ../../c++primerplus/第五章/6.cpp
        ../../c++primerplus/第六章/1.cpp
        ../../c++primerplus/第六章/2.cpp
        ../../c++primerplus/第六章/3.cpp
        ../../c++primerplus/第六章/4.cpp
        ../../c++primerplus/第六章/5.cpp
        ../../c++primerplus/第六章/6.cpp
        ../../c++primerplus/第七章/1.cpp
        ../../c++primerplus/第七章/2.cpp
        ../../c++primerplus/第七章/3.cpp
        ../../c++primerplus/第七章/4.cpp
        ../../c++primerplus/第七章/5.cpp
        ../../c++primerplus/第八章/1.cpp
        ../../c++primerplus/第八章/模板函数.cpp
        ../../c++primerplus/第八章/2.cpp
        ../../c++primerplus/第八章/3.cpp
        ../../c++primerplus/第八章/4.cpp
        ../../c++primerplus/第八章/5.cpp
        ../../c++primerplus/第八章/6.cpp
        ../../c++primerplus/第九章/1.cpp
        ../../c++primerplus/第九章/2.cpp
        ../../c++primerplus/第九章/3.cpp
        ../../c++primerplus/第十章/1.cpp
        ../../c++primerplus/第十章/2.cpp
)

# 如果需要链接额外的库，比如pthread
# target_link_libraries(main pthread)