#include "base16.h"
#include "iostream"
#include "string"
#include "vector"
using namespace std;

//编码索引表  静态全局变量，作用域本CPP文件
static const string map_Encode{"0123456789ABCDEF"};

//解码索引表
static const vector<char> map_Decode{
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //0 -9
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //10-19
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //20-29
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //30-39
    -1,-1,-1,-1,-1,-1,-1,-1,0,1,  //40-49
    2,3,4,5,6,7,8,9,-1,-1,  //50-59
    -1,-1,-1,-1,-1,10,11,12,13,14,  //60-69
    15,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //70-79
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //80-89
    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,  //90-99
};

// data 是需要编码的字符串
//返回 编码后的base16的字符串
string Encode(const vector<unsigned char> data) {
    string str;
    for (auto c : data) {
        char high = c >> 4;
        char low = c & 0x0f;
        str += map_Encode[high];
        str += map_Encode[low];
    }
    return str;
}
//data 是base16编码后的字符串 , 个数是2的倍数。
//返回 解码后的字符串
vector<unsigned char> DeCode(const string data) {
    vector<unsigned char> data1;
    for (int i = 0 ; i < data.length(); i+= 2) {
        unsigned char high = map_Decode[data[i]];
        unsigned char low = map_Decode[data[i+1]] ;
        data1.push_back((high << 4) | low);
    }
    return data1;
}