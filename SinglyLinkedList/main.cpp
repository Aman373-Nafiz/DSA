// SinglyLinkedList.cpp
#include "SinglyLinkedList.h"
#include "SinglyLinkedList.cpp"
#include <iostream>
using namespace std;
int main() {
    SinglyLinkedList<int> myList;

    myList.addFront(3);
    myList.addFront(2);
    myList.addFront(1);

    myList.print();

    return 0;
}
