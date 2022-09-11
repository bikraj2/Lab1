#ifndef queue_h
#define queue_h

#include<iostream>

class Queue{

public:
    virtual void enqueue (int data)=0;
    virtual int dequeue()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    virtual int front()=0;
    virtual int back()=0;
};

#endif