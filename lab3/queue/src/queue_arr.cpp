#include "queue_arr.h"
#include "custom_error.h"
template <class T>
Queue_Arr<T>::Queue_Arr(){
    this->f=-1;
    this->r=-1;
}
template <class T>
void Queue_Arr<T>::enqueue(T data){

    try{
        if(isFull()){
            throw custom_error("Queue Overflow: The queue is already full.");
        }
        r=(r+1)%MAX_SIZE;
        this->array[r]=data;
    }catch(custom_error){
        throw;
    }
}
template <class T>
void Queue_Arr<T>::dequeue(T &value){
    try{
        if(isEmpty()){
            throw custom_error("Queue Underflow: The queue is empty");
        }
        f=(f+1)%MAX_SIZE;
        value = this->array[f];
    }catch(custom_error){
        throw;
    }
}

template <class T>
bool Queue_Arr<T>::isEmpty(){
    if( r==f){
        return true;
    }
    return false;
}
template <class T>
bool Queue_Arr<T>::isFull(){
    if(f==(r+1)%MAX_SIZE)
    {
        return true;
    }else{
        return false;
    }
}
template <class T>
void Queue_Arr<T>::front(T & value){
    try{
        if(isEmpty()){
            throw custom_error("Queue Underflow: The queue is empty");
        }
        value = this->array[f+1];
    }catch(custom_error){
        throw;
    }
    
}
template <class T>
void Queue_Arr<T>::back(T &value){
     try{
        if(isEmpty()){
            throw custom_error("Queue Underflow: The queue is empty");
        }
        value = this->array[r];
    }catch(custom_error){
        throw;
    }
}
template class Queue_Arr<int>;
template class Queue_Arr<char>;
template class Queue_Arr<double>;
template class Queue_Arr<float>;



