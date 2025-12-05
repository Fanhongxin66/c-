#include "database.h"
#include "iostream"
#include "vector"
using namespace std;

vector<student> ALL_msg;
//用户 姓名， 年龄 ， 成绩
void DataInsert() {
    cout << "Please insert name" << endl;
    string name;
    cin >> name;
    cout << "Please insert age" << endl;
    int age;
    cin >> age;
    cout << "Please insert score" << endl;
    int score;
    cin >> score;
    student tmp;
    tmp.name = name;
    tmp.age = age;
    tmp.score = score;
    ALL_msg.push_back(tmp);
    cout << "Save success!" << endl;
};

//根据用户的姓名来删除信息
void DataDelete() {
    cout << "Please insert name" << endl;
    string name;
    cin >> name;
    for (int i = 0 ; i < ALL_msg.size();i++) {
        if (ALL_msg[i].name == name) {
            ALL_msg.erase(ALL_msg.begin() + i);
            cout << "Delete success!" << endl;
            return ;
        }
    }
    cout << "No such student" << endl;
}
//根据用户的姓名来查找信息，返回其他所有信息
void DataFind() {
    cout << "Please insert name" << endl;
    string name;
    cin >> name;
    for (int i = 0 ; i < ALL_msg.size();i++) {
        if (ALL_msg[i].name == name) {
            cout << "Student'name is:" << ALL_msg[i].name << endl;
            cout <<  "Student'age is:" << ALL_msg[i].age << endl;
            cout << "Student'score is:" << ALL_msg[i].score << endl;
            return ;
        }
    }
    cout << "No such student" << endl;
};

int GetUSerControl() {
    cout << "Input your number: 1.Insert  2.Find 3.Delete" << endl;
    int x ;
    cin >> x;
    return x;
};

