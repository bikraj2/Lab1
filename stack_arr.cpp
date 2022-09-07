#include <iostream>

#include "stack_arr.h"
 stack_arr::stack_arr(){
    top_index=-1;
}
bool stack_arr::isFull(){
    if(top_index>MAXSIZE-1){
        cout<<"The stack is full"<<endl;
        return true;
    }
    else{
        return false;
    }
}
bool stack_arr::isEmpty(){
    if(top_index<0){
        return true;
    }else{
        return false;
    }
}
void stack_arr:: push(int data)
{

    if(!this->isFull()){
        top_index+=1;
        this->data[top_index]=data;
    }
    else{
        cout<<"Cannot push element on the stack the stack is already full"<<endl;
    }
}
int stack_arr::top(){
    if(!this->isEmpty()){
        return data[top_index];
    }else{
        cout<<"The stack is empty"<<endl;
        return 0;
    }
}
int stack_arr::pop(){
    if(!this->isEmpty()){
        top_index--;
        return data[top_index];
    }else{
        cout<<"The stack is empty"<<endl;
        return 0;
    }
}
