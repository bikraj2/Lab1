/**
 * @file linked.cpp
 * @author Bikraj shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 */
#ifndef linked_h
#define linked_h

#include<iostream>
using namespace std;
//defining a class for node
template <class T>
class node{
    public:
    T data;
    node *nxt;
    node(T data=0);
};

//defining a class for linked list
template<class T>
class LinkedList{
    public:
    node<T> *HEAD;
    node<T> *TAIL;
    
        LinkedList();
        ~LinkedList();
        bool isEmpty();
        void addToHead(T data);
        void addToTail(T data); 
        void add (T data, node<T> * predecessor);
        void removeFromHead();
        void remove(T data);
        bool retrieve (T data,node<T> * &dataOutptr);
        void traverse();
        bool search(T  data);
};
#endif

