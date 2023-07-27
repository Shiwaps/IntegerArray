#include "IntegerArray.h"

IntegerArray::IntegerArray(size_t size) : data_(size) {}

IntegerArray::IntegerArray(const IntegerArray& other) : data_(other.data_) {}

size_t IntegerArray::getSize() const {
    return data_.size();
}

int& IntegerArray::operator[](size_t index) {
    if (index >= data_.size())
        throw bad_range();
    return data_[index];
}

void IntegerArray::resize(size_t new_size) {
    data_.resize(new_size);
}

void IntegerArray::insert(size_t index, int value) {
    if (index > data_.size())
        throw bad_range();
    data_.insert(data_.begin() + index, value);
}

void IntegerArray::remove(size_t index) {
    if (index >= data_.size())
        throw bad_range();
    data_.erase(data_.begin() + index);
}

void IntegerArray::pushFront(int value) {
    data_.insert(data_.begin(), value);
}

void IntegerArray::pushBack(int value) {
    data_.push_back(value);
}

bool IntegerArray::find(int value) const {
    return std::find(data_.begin(), data_.end(), value) != data_.end();
}
