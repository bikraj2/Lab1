#include "queue_ll.h"

using namespace std;

Queue_ll::Queue_ll(){
    top_index=-1;
}
bool Queue_ll::isEmpty(){
    if(l.isEmpty()){
        return true;
    }
    return false;
}
bool Queue_ll::isFull(){
    if(top_index==MAX_SIZE){
        return true;
    }
    return false;
}
void Queue_ll::enqueue(int data){
    try{
        if(isFull()){
            throw 1;
        }
        l.addToHead(data);
        top_index+=1;
    }catch(int i){
        throw;
    }
}
int Queue_ll::dequeue(){
    try{
        if(isEmpty()){
            throw 1;
        }
        int val = l.HEAD->data;
        l.removeFromHead();
        return val;
    }catch(int x){
        throw;
    }
}
int Queue_ll::front()
{
    try{
        if(isEmpty()){
            throw 1;

        }
        return l.TAIL->data;
    }catch(int x)
    {
        throw ;
    }
}
int Queue_ll::back()
{
    try{
        if(isEmpty()){
            throw 1;

        }
        return l.HEAD->data;
    }catch(int x)
    {
        throw ;
    }
}