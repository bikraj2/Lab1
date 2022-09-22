/**
 * @file main.cpp
 * @author Bikraj shrestha
 * @brief 
 * @version 0.1
 * @date 2022-09-01
 * 
 */

#include<iostream>

#include "linked.h"

using namespace std;
int main(){
    LinkedList list;
    //Linked list is empty at first since no data is added when first instantiated
    if(list.isEmpty()){
        cout<<"The list is empty"<<"\n";
    }
    //adding a data onto the linked list
    list.addToHead(50);
    list.traverse();
    //adding a data at the tail of the linked list
    cout<<"After the data is added on the tail"<<endl;
    list.addToTail(11);
    list.traverse();
    node * temp;
    if(list.retrieve(11,temp)){
        cout<<"Data exist in the linked list"<<endl;
    }
    cout<<"Adding a data after 11"<<endl;
    list.add(59,temp);
    list.traverse();
    cout<<"Removing a data from head"<<endl;
    list.removeFromHead();
    list.traverse();
    list.addToHead(66);
    list.addToHead(79);
    list.addToHead(89);
    cout<<"linked list after adding some more data"<<endl;
    list.traverse();
    cout<<"Removing a data"<<endl;
    list.remove(11);
    list.traverse();
    if(list.search(11)){
        cout<<"The data exists in the linked list"<<endl;
    }
    else{
        cout<<"The data doesnot exist in the linked list."<<endl;
    }
}