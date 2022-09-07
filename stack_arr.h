#ifndef stack_arr_h
#define stack_arr_h
#include "linked.h"
#include "stack.h"
#define MAXSIZE 10
class stack_arr:public stack{
  public:
        stack_arr();
        ~stack_arr();
        void push(int data);
        int pop();
        int top ();
        bool isEmpty();
        bool isFull();
    private:
     int  data[MAXSIZE];
     int top_index;
};
#endif