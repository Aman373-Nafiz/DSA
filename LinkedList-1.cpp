#include<iostream>
using namespace std;

template<class T>
class List {
public:
    T data;
    List* prev;
    List* next;

    List() {
        head = NULL;
    }

    void addFront(const T& data) {
        List* node = new List();
        node->data = data;
        node->next = head;
        node->prev = NULL;
        if (head != NULL) {
            head->prev = node;
        }
        head = node;
    }

    void addBack(const T& data) {
        List* node = new List();
        node->data = data;
        node->next = NULL;
        if (head == NULL) {
            node->prev = NULL;
            head = node;
            
        }
       else{
         List* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
        node->prev = temp;
       }
    }
 bool IsEmpty(){
    return(head==NULL);
 }
T getValue( T index){
    int i = -1;T result;
    List *temp = head;
    while(temp!=NULL){
        ++i;
        if(i==index){
result = temp->data;
break;
        }
        temp=temp->next;
    }
    return result;
}

 int length(){
    int size=0;
    List *temp = head;
    while(temp!=NULL){
size++;
temp = temp->next;
    }
    return size;
 }
 void deleteBack(){
    List *prevv;
    List *curr = head;
    while(curr->next!=NULL){
        prevv = curr;
        curr = curr->next;
    }
    prevv->next = NULL;
    delete curr;
}
    // Print the list
    void print() {
        List* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

private:
    List* head;
};

int main() {
    List<char> lol;
    lol.addBack('c');
    lol.addBack('h');
    lol.addFront('x');
    lol.addBack('y');
    lol.deleteBack();
    cout<<lol.getValue(1)<<"\n";
    lol.print();
}