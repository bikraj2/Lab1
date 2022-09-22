#ifndef queue_ll_h
#define queue_ll_h
#define MAX_SIZE 10
#include "queue.h"
#include "linked.h"
class Queue_ll:public Queue{

public:
    Queue_ll();
    void enqueue (int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
private:
    LinkedList l;
    int top_index;
};

#endif