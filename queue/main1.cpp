#include <iostream>

#include "queue_arr.h"
using namespace std;

int main(){
    Queue *  q  = new Queue_Arr;
    q->enqueue(9013);
    cout<<"The element at the front and the back of the queue is :"<<q->front()<<" , " <<q->back()<<endl;
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    cout<<"The element at the front and the back of the queue is :"<<q->front()<<" , " <<q->back()<<endl;
    q->dequeue();
    cout<<"The element at the front and the back of the queue is :"<<q->front()<<" , " <<q->back()<<endl;
    q->dequeue();
    cout<<"The front of the linked list is: "<<q->front()<<endl;
    q->enqueue(7);
    cout<<"The front of the linked list is: "<<q->front()<<endl;
    delete q;
}