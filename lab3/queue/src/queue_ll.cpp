#include "queue_ll.h"
#include "custom_error.h"
using namespace std;

template <class T>
Queue_ll<T>::Queue_ll(){
    top_index=-1;
}
template <class T>
bool Queue_ll<T>::isEmpty(){
    if(l.isEmpty()){
        return true;
    }
    return false;
}
template <class T>
bool Queue_ll<T>::isFull(){
    if(top_index==MAX_SIZE){
        return true;
    }
    return false;
}
template <class T>
void Queue_ll<T>::enqueue(T data){
    try
    {
        if(isEmpty())
        {
            l.addToHead(data);
            top_index+=1;
        
        }
        else if(isFull())
        {
            throw custom_error("Queue overflow: The queue is already FULL.");
        }
        else
        {
            l.addToTail(data);
        top_index+=1;
    }}
    catch(custom_error){
        throw;
    }
}

template <class T>
void Queue_ll<T>::dequeue(T &value){
    try{
        if(isEmpty()){
            throw custom_error("Queue Underflow : The queue is already empty");
        }
        T val = l.HEAD->data;
        l.removeFromHead();
        value=val;
    }catch(int x){
        throw;
    }
}
 template <class T>
void Queue_ll<T>::front(T &value)
{
    try{
        if(isEmpty()){
            throw custom_error("Queue Underflow : The queue is already empty");

        }
        value=l.HEAD->data;
    }catch(int x)
    {
        throw ;
    }
}
template <class T>
void Queue_ll<T>::back(T &value)
{
    try{
        if(isEmpty()){
            throw custom_error("Queue Underflow : The queue is already empty");

        }
        value=l.TAIL->data;
    }catch(custom_error)
    {
        throw ;
    }
}
template <class T>
void Queue_ll<T> :: traverse(){
    l.traverse();
}


template class Queue_ll<int>;
template class Queue_ll<char>;
template class Queue_ll<double>;