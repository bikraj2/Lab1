#ifndef stack_h
#define stack_h

class stack{
    public:
        stack(){}
        ~stack(){}
        virtual void push(int data)=0;
        virtual int pop()=0;
        virtual int top ()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
};

#endif