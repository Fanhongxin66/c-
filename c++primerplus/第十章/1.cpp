#include <iostream>


class student {
public:
    void func1() {
        std::cout << "student::func1" << std::endl;
    }
    void func1(int a ) {
        std::cout << "student::func2" << std::endl;
    }


};

int main() {


    student st;
    st.func1();
    st.func1(5);
}