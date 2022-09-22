/**
 * @file stack_arr.h
 * @author Bikraj Shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef stack_arr_h
#define stack_arr_h
#include "linked.h"
#include "stack.h"
#define MAXSIZE 10
template <class T>
class stack_arr:public stack<T>{
  public:
        stack_arr();
        ~stack_arr();
        void push(T data);
        bool pop(T &data);
        bool top (T &data);
        bool isEmpty();
        bool isFull();
    private:
     T  data[MAXSIZE];
     int top_index;
};
#endif