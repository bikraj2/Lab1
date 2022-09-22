#include "queue_ll.h"
#include <iostream>
#include "queue.h"
using namespace std;

int main(){
    Queue *q = new Queue_ll;
    try{
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);
        q->enqueue(13);

    }catch(int x){
        cout<<"The list is full cannot add anymore item."<<endl;
    }
    cout<<q->back()<<endl;
    try{
        q->dequeue();
        q->dequeue();
        q->dequeue();
        q->dequeue();
        q->dequeue();
        q->dequeue();
        q->dequeue();
        q->dequeue();
    
    }catch(int x){
        cout<<"Cannot dequeu any more as the queue is empty"<<endl;
    }
    delete q;
}