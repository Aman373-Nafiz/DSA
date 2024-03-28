#include"SinglyLinkedList.h"
#include<iostream>
using namespace std;
template<class T>
SinglyLinkedList<T>::SinglyLinkedList(){
        head = NULL;
    }
template<class T>
void SinglyLinkedList<T>:: addFront( const T& data){
 SinglyLinkedList *node = new SinglyLinkedList();
 node->data = data;
 node->next = head;
 head = node;
    }
template<class T>
void SinglyLinkedList<T>:: addBack(const T& data){
    SinglyLinkedList *node = new SinglyLinkedList();
     node->data = data;
     node->next = NULL;
     if(head==NULL){
        head = node;
     }
     else{
        SinglyLinkedList* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = node;
     }
}
template<class T>
void SinglyLinkedList<T>:: deleteFront(){
    SinglyLinkedList * temp = head;
    head = head->next;
    delete temp;
}
template<class T>
 bool SinglyLinkedList<T>:: IsEmpty(){
    return(head==NULL);
 }
 template<class T>
 int SinglyLinkedList<T>::length(){
    int size=0;
    SinglyLinkedList *temp = head;
    while(temp!=NULL){
size++;
temp = temp->next;
    }
    return size;
 }

template<class T>
void SinglyLinkedList<T>::deleteBack(){
    SinglyLinkedList *prev;
    SinglyLinkedList *curr = head;
    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
}
template<class T>
    void SinglyLinkedList<T>:: print(){
SinglyLinkedList *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }