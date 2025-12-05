#include <iostream>
#include <cstring>
using namespace std;


class deepcopy {
    public:
    int *date;
    deepcopy(int value) {
        date = new int(value);
    };
    deepcopy(const deepcopy& obj) {
        date = new int(*obj.date);
    }
    ~deepcopy() {
        delete date;
    }

};
class String {
    public:
    ~String() {
        cout << "Drop string" << size_ << endl;
        clear();
    }
    void clear() {
        delete str_;
        size_  = 0 ;
        str_ = nullptr;
    }
    //输出对象String的内容
    const char* c_str() {
        if (!str_) return "";
        return str_;
    }
    //深度拷贝
    String(const char* str) {
        size_ = strlen(str);
        if (!size_) return ;
        str_ = new char[size_ + 1];
        memcpy(str_, str, size_ + 1);
    }
    //深度拷贝
    String(const String& obj) {
        size_ = obj.size_;
        if (!size_) return ;
        str_ = new char[size_ + 1];
        memcpy(str_, obj.str_, size_ + 1);
    }
    //移动语义深度拷贝。
    String(String&& obj) {
        cout << "moving String" << endl;
        size_ = obj.size_;
        if (!size_) return ;
        str_ = obj.str_;
        obj.str_ = nullptr;
        obj.size_ = 0;
    }
    // 操作符重载
    String& operator=(const String& obj) {
        if (this ==  &obj) return *this;
        clear();
        size_ = obj.size_;
        if (!size_) return *this;
        str_ = new char[size_ + 1];
        memcpy(str_, obj.str_, size_ + 1);
        return *this;
    }
private:
    int size_{ 0 };
    char* str_{nullptr};

};


int main() {
    {
        String str1("test string 001");
        String str2 = str1;
        cout << "str1:" << str1.c_str() << endl;
        cout << "str2:" << str2.c_str() << endl;
        String str3(move(str2));
        cout << "str1:" << str1.c_str() << endl;
        cout << "str2:" << str2.c_str() << endl;
        cout << "str3:" << str3.c_str() << endl;
        String str4 = str1 ;
        cout << "str4:" << str1.c_str() << endl;
    }


    getchar();
    deepcopy obj(5);
    deepcopy obj2 = obj;
    cout << *obj.date << endl;
    *(obj2.date) = 10;
    cout << *obj2.date << endl;
    cout << "------------------------" << endl;
    string y = "abcdefghi" ;
    string x = move(y);
    cout<< y << endl;
    cout << x << endl;
}