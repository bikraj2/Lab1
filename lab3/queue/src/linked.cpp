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
template<class T>
node<T>::node(T data )
{
    this->data =data;
    nxt = NULL;
}
template<class T>
LinkedList<T>::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
    cout<<"A new linked list is created."<<endl;
}
template<class T>
LinkedList<T>::~LinkedList()
{
    node<T> *temp = HEAD;
    node<T> *temp2 = HEAD;
    while (temp != NULL)
    {
        temp = temp->nxt;
        delete temp2;
        temp2 = temp;
    }
}
template<class T>
bool LinkedList<T>::isEmpty()
{
    if (HEAD == NULL)
    {
        return true;
    }
    return false;
}
template<class T>
void LinkedList<T>::addToHead(T data)
{
    node<T> *newNode = new node<T>;
    newNode->data = data;
    newNode->nxt = HEAD;
    HEAD = newNode;
    if (TAIL == NULL)
    {
        TAIL = HEAD;
    }
}
template<class T>
void LinkedList<T>::addToTail(T data)
{
    node<T> *newNode = new node<T>;
    newNode->data = data;
    newNode->nxt = NULL;
    TAIL->nxt = newNode;
    TAIL = newNode;
}
template<class T>
void LinkedList<T>::add(T data, node <T> * predecessor){
    node<T> * newNode = new node<T>;
    newNode->data = data;
    newNode->nxt = predecessor->nxt;
    predecessor->nxt = newNode;
}
template<class T>
void LinkedList<T>::traverse()
{
    node<T> * temp = HEAD;
    while(temp!=NULL){
        cout<<"The data is :"<<temp->data<<"\n";
        temp = temp->nxt;
    }
}
template<class T>
void LinkedList<T>::removeFromHead(){
    if(!isEmpty())
    {
    node<T> * nodeDlt = HEAD;
    HEAD = HEAD->nxt;
    delete nodeDlt;
    if(HEAD ==NULL){
        TAIL = NULL;
    }
     
    }
}
template<class T>
void LinkedList<T>:: remove(T data){
    if(!isEmpty())
    {
        if(HEAD->data == data){
            removeFromHead();
        }
        else{
        node<T> * temp1 = HEAD;
        node<T> * temp2=HEAD->nxt;
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
template<class T>
bool LinkedList<T>:: retrieve(T data,node <T>*  &dataOutptr){
    node<T> * temp = HEAD;
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
template<class T>
bool LinkedList<T>::search(T data){
    node<T> * temp =HEAD;
    while(temp!=NULL){
        if(temp->data == data){
            return true;
        }
        temp=temp->nxt;
    }
    return false;
}
template class LinkedList<char>;
template class LinkedList<int>;
template class LinkedList<float>;
template class LinkedList<double>;