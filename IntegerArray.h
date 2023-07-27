#pragma once

#include <vector>
#include <stdexcept>


class bad_range : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Out of range";
    }
};

class bad_length : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Invalid length";
    }
};

class IntegerArray {
private:
    std::vector<int> data_;

public:
    explicit IntegerArray(size_t size);
    IntegerArray(const IntegerArray& other);
    size_t getSize() const;
    int& operator[](size_t index);
    void resize(size_t new_size);
    void insert(size_t index, int value);
    void remove(size_t index);
    void pushFront(int value);
    void pushBack(int value);
    bool find(int value) const;
};
