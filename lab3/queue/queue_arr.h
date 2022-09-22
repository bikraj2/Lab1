#ifndef queue_arr_h
#define queue_arr_h
#include "queue.h"  
#define MAX_SIZE 10
class Queue_Arr: public Queue{

public:
    Queue_Arr();
    void enqueue (int data);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int front();
    int back();
private:
     int array[MAX_SIZE];
     int f;
     int r;
};

#endif