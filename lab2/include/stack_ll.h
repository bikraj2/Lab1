
/**
 * @file stack_ll.h
 * @author Bikraj Shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef stack_ll_h
#define stack_ll_h
#include "linked.h"
#include "stack.h"
template <class T>
class stack_ll:public stack<T>{
    public:
        stack_ll ():top_index(1){};
        ~stack_ll();
        void push(T data);
        bool pop(T &value);
        bool top (T &value);
        bool isEmpty();
        bool isFull();
    private:
        LinkedList<T> l;
        int top_index;
};
#endif