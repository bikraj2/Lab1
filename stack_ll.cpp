#include<iostream>
#define MAXSIZE 10
#include "stack_ll.h"
#include "stack.h"
stack_ll::stack_ll(){
    top_index=-1;
}
bool stack_ll::isEmpty()
{
    if(this->l.isEmpty()){
        return true;
    }else{
        return false;
    }
}
bool stack_ll::isFull()
{
    if(top_index>MAXSIZE-1){
        return true;
    }else{
        return false;
    }
}
void stack_ll::push(int data){
    if(!this->isFull()){
        top_index+=1;
        l.addToHead(data);
    }else{
        cout<<"The stack is full"<<endl;
    }
}
void stack_ll::pop(){
    if(!l.isEmpty()){
        l.removeFromHead();
    }else{
        cout<<"The stack is already empty"<<endl;
    }
}