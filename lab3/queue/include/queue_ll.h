#ifndef queue_ll_h
#define queue_ll_h
#define MAX_SIZE 10
#include "queue.h"
#include "linked.h"

template <class T>
class Queue_ll:public Queue<T>{

public:
    Queue_ll();
    void enqueue (T data);
    void dequeue(T &value);
    bool isEmpty();
    bool isFull();
    void front(T &value);
    void back(T &value);
    void traverse();
private:
    LinkedList <T>l;
    int top_index;
};

#endif