#include <iostream>

#include "queue_arr.h"
#include "custom_error.h"
#include "queue_ll.h"
using namespace std;

int main(){
    Queue<int> * q= new Queue_ll<int>();
    if(q->isEmpty())
    {
        cout<<"The queue is empty."<<endl;
    }else{
        cout<<"There is some element in the queue."<<endl;
    }
    
    int value;
    try
    {
       q->enqueue(599);
       q->dequeue(value); 
       cout<<"The Dequeued element is: "<<value<<endl;
       q->dequeue(value);
    }
    catch(custom_error e)
    {
        cout<<"Caught an Exception:"<<e.what()<<endl;
    
    }
    try
    {
        q->enqueue(26);
        q->enqueue(90);
        q->enqueue(50);
        q->enqueue(66);
        q->back(value);
        q->traverse();
        cout<<"The element at the back of the queue is: "<<value<<endl;
        q->front(value);
        cout<<"The element at the front of the queue is: "<<value<<endl;
        q->dequeue(value);
        q->front(value);
        cout<<"The element at the front of the queue is: "<<value<<endl;

    }
    catch(custom_error e)
    {
        cout<<"Caught an Exception:"<<e.what()<<endl;
    }
    
    try
    {
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
       q->enqueue(599);
    }
    catch(custom_error e)
    {
        cout<<"Caught an Exception:::"<<e.what()<<endl;
    
    }
    delete q;
}