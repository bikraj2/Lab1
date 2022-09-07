#include<iostream>
#include "stack_arr.h"
#include "stack.h"
int main()
{
    stack * s = new stack_arr;
    if(s->isEmpty()){
        cout<<"the stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty";
    }
    cout<<"Pushing some data to the stack"<<endl;
    s->push(50);
    cout<<"top of the stack is : "<<s->top()<<endl;
    cout<<"Pushing some data to the stack"<<endl;
    s->push(45);
    s->push(64);
    cout<<"top of the stack is : "<<s->top()<<endl;
    s->pop();
    cout<<"top of the stack is : "<<s->top()<<endl;
    if(s->isEmpty()){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }
    s->push(45);
    s->push(64);
    s->push(45);
    s->push(64);
    s->push(45);
    s->push(64);
    s->push(45);
    s->push(64);
    s->push(45);
    s->push(64);
    delete s;
};