#include "queue_arr.h"

#include <iostream>
using namespace std;
Queue_Arr::Queue_Arr(){
    f = -1;
    r = -1;
}

void Queue_Arr::enqueue(int data){
    try{
        if(isFull())
        {
            throw 1;
        }
        r=MAX_SIZE%(r+1);
        array[r]=data;
    }catch(int x){
        cout<<"The queue is already full. Cannnot add any more item"<<endl;
    }
}
int Queue_Arr :: dequeue(){
    try{
        if(isEmpty()){
            throw 2;
        }
        f=MAX_SIZE%(f+1);
        return array[f];
    }catch(int x){
        cout<<"The queue is empty.Cannot add dequque an element."<<endl;
        return NULL;
    }
}

bool Queue_Arr:: isEmpty(){
    if(f==r){
        return true;
    }
    else{
        return false;
    }
}
bool Queue_Arr:: isFull(){
    if(r==MAX_SIZE-1){
        return true;
    }else{
        return false;
    }
    asdf
}
int Queue_Arr:: front(){
    try{
        if(isEmpty()){
            throw 1;
        }
        return array[f+1];
    }catch(int r){
        cout<<"The queue is empty. Cannot return any elemnt from the queue."<<endl;
        return NULL;
    }
}
int Queue_Arr:: back(){
    try{
        if(isEmpty()){
            throw 1;
        }
        return array[r];
    }catch(int r){
        cout<<"The queue is empty. Cannot return any elemnt from the queue."<<endl;
        return NULL;
    }
}
