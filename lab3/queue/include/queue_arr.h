#ifndef queue_arr_h
#define queue_arr_h
#include "queue.h"  
#define MAX_SIZE 10

template <class T>
class Queue_Arr: public Queue<T>{
public:
    Queue_Arr();
    void enqueue (T data);
    void dequeue(T &value);
    bool isEmpty();
    bool isFull();
    void front(T &value);
    void back(T &value);
    void traverse();
private:
     int array[MAX_SIZE];
     int f;
     int r;
};

#endif