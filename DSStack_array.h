// Implement a stack based on an array.

#ifndef DSSTACK_ARRAY_H
#define DSSTACK_ARRAY_H

#include <iostream>

template <typename Object>
class DSStack_array {
    private:
        Object* data;
        size_t capacity;    // number of spaces on the heap that are allocated
        size_t len;         // number of elements saved in the stack

    public:
        DSStack_array<Object>();

        // Rule of three is needed if dynamic memory allocation is used
        DSStack_array<Object>(const DSStack_array<Object> &);            // copy constructor
        ~DSStack_array<Object>();                           // destructor
        DSStack_array<Object> &operator=(const DSStack_array<Object> &); // assignment operator
        Object &operator[](size_t index) const;
        bool operator==(const DSStack_array<Object> &) const; //== comparison operator

        // you can also implement the move versions for the big 5 (C+11)

        size_t size() const; // returns the size
        
        void push(Object);
        void pop();
        bool empty();
        Object top();
};

template<typename Object>
DSStack_array<Object>::DSStack_array() {
    capacity = 10;
    data = new Object[capacity];
    len = 0;
}


template<typename Object>// Rule of three is needed if dynamic memory allocation is used
DSStack_array<Object>::DSStack_array(const DSStack_array<Object> &original) {
    capacity = original.capacity;
    data = new Object[original.capacity];
    for(size_t i = 0; i < original.len; ++i) {
        data[i] = original.data[i];
    }
    len = original.len;
}            // copy constructor

template<typename Object>
DSStack_array<Object>::~DSStack_array() {
    delete[] data;
}                           // destructor

template<typename Object>
DSStack_array<Object> &DSStack_array<Object>::operator=(const DSStack_array<Object> &rhs) {
    if(this != &rhs) {
        delete[] data;
        capacity = rhs.capacity;
        len = rhs.len;
        data = new Object[capacity];

        for(size_t i = 0; i < len; ++i) {
            data[i] = rhs.data[i];
        }
    }
    return *this;
} // assignment operator

template<typename Object>
Object &DSStack_array<Object>::operator[](size_t index) const { //[] operator for accessing element in array
    if(index < 0 || index > len-1)
        std::cerr << "Index out of bounds" << std::endl;
    else
        return data[index];
}

template<typename Object>
bool DSStack_array<Object>::operator==(const DSStack_array<Object> &arrayToCompare) const { //== comparison operator
    for(size_t i = 0; i < len; ++i) {
        if(data[i] != arrayToCompare.data[i])
            return false;
    }
    return true;
}

// you can also implement the move versions for the big 5 (C+11)

template<typename Object>
size_t DSStack_array<Object>::size() const {
    return len;
} // returns the size

template<typename Object>        
void DSStack_array<Object>::push(Object newElement) { //pushes a new element to the stack
    if(len == capacity) {
        Object* temp = new Object[capacity*2];
        for(size_t i = 0; i < len; ++i)
            temp[i] = data[i];

        delete[] data;
        data = temp; 
    }

    data[len] = newElement;
    ++len;
}

template<typename Object>
void DSStack_array<Object>::pop() { //pops an element off the stack
    if(len == 0)
        std::cerr << "Stack was empty" << std::endl;
    len = len-1;
}

template<typename Object>
bool DSStack_array<Object>::empty() { //checks if the stack is empty
    if(len == 0)
        return true;
    return false;
}

template<typename Object>
Object DSStack_array<Object>::top() { //returns the top value of the stack
    if(len == 0)
        std::cerr << "Stack was empty" << std::endl;
    else
        return data[len-1];
}

#endif