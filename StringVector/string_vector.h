#pragma once
#include <string>
#include <memory>
class StringVector {
    public:
    StringVector(int size);
    void Push(const std::string& s);
    std::string& operator[](int i);
    int size() {return size_ ;}
    int Capacity();

    private:
    int size_{0};
    std::unique_ptr<std::string[]> ptr_;
    int capacity_{0};
};