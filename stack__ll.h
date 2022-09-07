#ifndef stack_ll_h
#define stack_ll_h
#include "linked.h"
class stack_ll{
    public:
        stack_ll();
        ~stack_ll();
        void push(int data);
        int pop();
        int top ();
        bool isEmpty();
        bool isFull();
    private:
        LinkedList l;
};
#endif