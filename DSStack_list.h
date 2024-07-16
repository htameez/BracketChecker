// Implement a stack based on an array.

#ifndef DSSTACK_LIST_H
#define DSSTACK_LIST_H

#include "DSList.h"

template <typename Object>
class DSStack_list { //wrapper class
    private:
        DSList<Object> data; //data in list
    public:
        size_t size() const { return data.size(); }; // returns the size
        void push(Object newElement) { data.push_front(newElement); }; //pushes an element onto stack by using push_front() from DSList
        void pop() { data.pop_front(); }; //pops an element off of stack by using pop_front() from DSList
        bool empty() { return data.empty(); }; //checks if stack is empty by using empty() from DSList
        Object top() { return data.front(); }; //returns top element of stack by using front() from DSList
};



#endif