#pragma once
#include "string"
#include "vector"

struct student {
    std::string name;
    int age;
    int score;
};
extern std::vector<student> ALL_msg;

//用户 姓名， 年龄 ， 成绩
void DataInsert();

//根据用户的姓名来删除信息
void DataDelete();
//根据用户的姓名来查找信息，返回其他所有信息
void DataFind();

int GetUSerControl();

