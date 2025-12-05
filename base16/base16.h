#pragma once
#include "vector"
#include "string"
// data 是需要编码的字符串
//返回 编码后的base16的字符串
std::string Encode(const std::vector<unsigned char> data) ;


//data 是base16编码后的字符串 , 个数是2的倍数。
//返回 解码后的字符串
std::vector<unsigned char> DeCode(const std::string data);