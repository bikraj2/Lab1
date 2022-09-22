/**
 * @file main2.cpp
 * @author Bikraj Shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include "stack.h"
#include "stack_ll.h"
#include "stack_arr.h"
int main()
{
    //creating a stack that can hold char values.
    stack<char> * s = new stack_arr<char>();
    char value;
    //checking if the stack is empty
    if(s->isEmpty()){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty";
    }
    cout<<"Pushing some data to the stack"<<endl;
    s->push('r');
    //getting the value at the top of the stack
    if( s->top(value))
    {
        cout<<"Top of the stack is : "<<value<<endl;
    }
    cout<<"Pushing some data to the stack"<<endl;
    s->push('c');
    s->push('f');
    //poping the top of the stack
    s->pop(value);
    cout<<"The popped element from the stack is :"<<value<<endl;
    s->push('d');
    s->push('e');
    s->push('g');
    s->push('d');
    s->push('e');
    s->push('g');
    s->push('d');
    s->push('e');
    s->push('g');
    s->push('e');
    s->push('g');
    delete s;
}