#include <iostream>
#include <memory>
#include <utility>
using namespace std;
class DATA {
public:
    DATA(){cout << "creat DATA:" << endl;}
    ~DATA(){cout << "destroy DATA" << endl;delete str_;}
    DATA& operator= (const DATA & ) = delete;
private:
    DATA* str_ = nullptr;
};
class DATAptr {
public:
    DATAptr() = default;
    DATAptr(DATA* data) {
        str_ = data;
    }
    ~DATAptr() {
        delete str_;
    }
    //限制赋值
    DATAptr(const DATAptr &) = delete;
    //限制拷贝构造
    DATAptr* operator=(const DATAptr& ) = delete;
    //移动拷贝
    DATAptr* operator=(DATAptr&& obj ) {
        str_ = obj.str_;
        obj.str_ = nullptr;
        return this;
    }
    DATA* Get() {
        return str_;
    }
    //移动赋值
    DATAptr(DATAptr&& obj) {
        str_ = obj.str_;
        obj.str_ = nullptr;
    }
 private:
    DATA* str_ = nullptr;
};
int main() {

    DATAptr ptr1(new DATA());
    DATAptr ptr2;
    ptr2 = move(ptr1);
    cout << ptr1.Get() << endl;
    cout << ptr2.Get() << endl;
    DATAptr ptr3(move(ptr1));
    //智能指针定义
    std::unique_ptr ptr1 ;
    //make_unique<int>() 后面加个括号代表已经生成了这块空间，用来存放int类型的指针。
    ptr1 = make_unique<int>();

    getchar();

}

