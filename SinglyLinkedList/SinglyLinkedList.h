#ifndef SINGLYLINKEDLIST_H_INCLUDED
#define SINGLYLINKEDLIST_H_INCLUDED
#include<iostream>
using namespace std;
template<class T>
class SinglyLinkedList{
    public:
    T data;
    SinglyLinkedList *next;
    SinglyLinkedList();
    void addFront( const T& data);
    void addBack(const T& data);
    void deleteFront();
    void deleteBack();
    bool IsEmpty();
    int length();
    void print();
    private:
    SinglyLinkedList *head;
};


#endif // SINGLYLINKEDLIST_H_INCLU