/**
 * @file stack_ll.cpp
 * @author Bikraj Shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#define MAXSIZE 10
#include "stack_ll.h"
#include "stack.h"

template <class T>
bool stack_ll<T>::isEmpty()
{
    if(this->l.isEmpty()){
        return true;
    }else{
        return false;
    }
}
template <class T>
bool stack_ll<T>::isFull()
{
    if(top_index>MAXSIZE-1){
        return true;
    }else{
        return false;
    }
}
template<class T>
void stack_ll<T>::push(T data){
    if(!this->isFull()){
        top_index+=1;
        l.addToHead(data);
    }else{
        cout<<"The stack is full.Cannot add any more element in the stack"<<endl;
    }
}
template <class T>
bool stack_ll<T>::pop(T &value){
    if(!l.isEmpty()){
        value =this->l.HEAD->data;

        l.removeFromHead();
        return true;
    }else{
        cout<<"The stack is already empty"<<endl;
        return false;
    }
}
template <class T>
bool  stack_ll<T>::top(T &value){
    if(!l.isEmpty()){
        value =this->l.HEAD->data;
        return true;
    }else{
        cout<<"The stack is already empty"<<endl;
        return false;
    }
}
template class stack_ll<float>;
template class stack_ll<int>;
template class stack_ll<char>;