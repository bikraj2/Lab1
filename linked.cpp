/**
 * @file linked.cpp
 * @author Bikraj shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 */
#include <iostream>
#include "linked.h"

using namespace std;
// defination for the class node
node::node(int data )
{
    data =data;
    nxt = NULL;
}
LinkedList::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
    cout<<"A new linked list is created."<<endl;
}

LinkedList::~LinkedList()
{
    node *temp = HEAD;
    node *temp2 = HEAD;
    while (temp != NULL)
    {
        temp = temp->nxt;
        delete temp2;
        temp2 = temp;
    }
}
bool LinkedList::isEmpty()
{
    if (HEAD == NULL)
    {
        return true;
    }
    return false;
}
void LinkedList::addToHead(int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->nxt = HEAD;
    HEAD = newNode;
    if (TAIL == NULL)
    {
        TAIL = HEAD;
    }
}
void LinkedList::addToTail(int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->nxt = NULL;
    TAIL->nxt = newNode;
    TAIL = newNode;
}
void LinkedList::add(int data, node * predecessor){
    node * newNode = new node;
    newNode->data = data;
    newNode->nxt = predecessor->nxt;
    predecessor->nxt = newNode;
}
void LinkedList::traverse()
{
    node * temp = HEAD;
    while(temp!=NULL){
        cout<<"The data is :"<<temp->data<<"\n";
        temp = temp->nxt;
    }
}
void LinkedList::removeFromHead(){
    if(!isEmpty())
    {
    node * nodeDlt = HEAD;
    HEAD = HEAD->nxt;
    delete nodeDlt;
    if(HEAD ==NULL){
        TAIL = NULL;
    }
     
    }
}

void LinkedList:: remove(int data){
    if(!isEmpty())
    {
        if(HEAD->data == data){
            removeFromHead();
        }
        else{
        node * temp1 = HEAD;
        node * temp2=HEAD->nxt;
        while(temp2!=NULL){
            if(temp2->data == data){
                break;
            }
            temp2=temp2->nxt;
            temp1 = temp1->nxt;
        }
        if(temp2!=NULL){
            temp1->nxt = temp2->nxt;
            delete temp2;
            if(temp1->nxt==NULL){
                TAIL=temp1;
            }
        }
        }
    }
}
bool LinkedList:: retrieve(int data,node*  &dataOutptr){
    node * temp = HEAD;
    while(temp!=NULL)
    {
        if(temp->data == data){
            
            dataOutptr = temp;
            return true;
        }
        temp=temp->nxt;
    }
    return false;

}
bool LinkedList::search(int data){
    node * temp =HEAD;
    while(temp!=NULL){
        if(temp->data == data){
            return true;
        }
        temp=temp->nxt;
    }
    return false;
}