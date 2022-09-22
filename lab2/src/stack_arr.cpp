/**
 * @file stack_arr.cpp
 * @author Bikraj Shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

#include "stack_arr.h"
template <class T>
 stack_arr<T>::stack_arr(){
    top_index=-1;
}
template <class T>
bool stack_arr<T>::isFull(){
    if(top_index>MAXSIZE-1){
        return true;
    }
    else{
        return false;
    }
}
template <class T>
bool stack_arr<T>::isEmpty(){
    if(top_index<0){
        return true;
    }else{
        return false;
    }
}
template <class T>
void stack_arr<T>:: push(T data)
{

    if(!this->isFull()){
        top_index+=1;
        this->data[top_index]=data;
    }
    else{
        cout<<"Cannot push element on the stack the stack is already full"<<endl;
    }
}
template <class T>
bool stack_arr<T>::top(T &data){
    if(!this->isEmpty()){
        data =this->data[top_index];
        return true;
    }else{
        cout<<"The stack is empty"<<endl;
        return false;
    }
}
template <class T>
bool stack_arr<T>::pop(T &data){
    if(!this->isEmpty()){
        top_index--;
        data=this->data[top_index];
        return true;
    }else{
        cout<<"The stack is empty"<<endl;
        return false;
    }
}
template class stack_arr<char>;
template class stack_arr<int>;
template class stack_arr<float>;