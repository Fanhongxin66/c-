#include <iostream>
using namespace std;

class student {
    public:
    student(string name, int age) {
        cout << "Create student successfully" << endl;
        name_ = name;
        age_ = age;
    }
    student & operator = (student & other) {
        name_ = "Fuck";
        age_ = 15;
        return *this;
    }
    string get_name() {
        return name_;
    }
    int get_age() {
        return age_;
    }
    ~student() {
        cout << "Delete student successfully" << endl;

    }
    private:
    string name_;
    int age_;
};

void  ss() {
    cout << "Hello World!" << endl;
}
void  ss1() {
    cout << "Hello World!" << endl;
}

int main() {
    student stu("Jack",15);
    student stu1("Hello", 18);
    stu1 = stu;
    student stu2 = stu;
    cout << stu.get_name() << endl;
    cout << stu.get_age() << endl;
    cout << stu1.get_name() << endl;
    cout << stu1.get_age() << endl;
    cout << stu2.get_name() << endl;
    cout << stu2.get_age() << endl;
}