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
class node{
    public:
    int data;
    node *nxt;
    node(int data=0);
};

//defining a class for linked list
class LinkedList{
    node *HEAD;
    node *TAIL;
    public:
        LinkedList();
        ~LinkedList();
        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add (int data, node * predecessor);
        void removeFromHead();
        void remove(int data);
        bool retrieve (int data,node * &dataOutptr);
        void traverse();
        bool search(int data);
};
#endif

