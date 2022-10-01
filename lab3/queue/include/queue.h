#ifndef queue_h
#define queue_h

#include<iostream>


template <class T>
class Queue{
public:
    virtual void enqueue (T data)=0;
    virtual void dequeue(T &value)=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    virtual void front(T &value)=0;
    virtual void back(T &value)=0;
    virtual void traverse()=0;
};

#endif