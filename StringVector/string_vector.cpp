#include "string_vector.h"

#include <cstring>

std::string &StringVector::operator[](int i) {
    return ptr_[i];
}
StringVector::StringVector(int size): capacity_(size), size_(0)  {
    ptr_ = std::make_unique<std::string[]>(size);
}
int StringVector::Capacity() {
    return capacity_;
}
void StringVector::Push(const std::string &s) {
        if (size_ <capacity_) {
        ptr_[size_++] = s;
        capacity_ += strlen(s.c_str()) - 1 ;
    }
    else {
        capacity_ = capacity_ * 2;
        auto temp = std::make_unique<std::string[]>(capacity_);
        for (int i = 0; i < size_; i++) {
            temp[i] = ptr_[i];
        }
        
        ptr_ = std::move(temp);
    }
}




