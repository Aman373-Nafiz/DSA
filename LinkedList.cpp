#include<iostream>
using namespace std;
template<class T>
class List{
    public:
    T data;
    List *next;
    List(){
        head = NULL;
    }
    void addFront( const T& data){
 List *node = new List();
 node->data = data;
 node->next = head;
 head = node;
    }

void addBack(const T& data){
     List *node = new List();
     node->data = data;
     node->next = NULL;
     if(head==NULL){
        head = node;
     }
     else{
        List* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = node;
     }
}
void deleteFront(){
    List * temp = head;
    head = head->next;
    
    delete temp;
}

 bool IsEmpty(){
    return(head==NULL);
 }
 
 int length(){
    int size=0;
    List *temp = node;
    while(temp!=NULL){
size++;
temp = temp->next;
    }
    return size;
 }

void deleteBack(){
    List *prev;
    List *curr = head;
    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
}
    void print(){
List *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }
    private:
    List *head;
    
};

int main(){
    List<int>l;
    List<char>names;
    l.addFront(2);
    l.addFront(3);
    l.addFront(1);
    l.print();

    l.deleteBack();
    cout<<"\n";
    l.print();
    names.addBack('N');
    names.addBack('A');
    names.addBack('F');
    names.addBack('I');
    names.addBack('Z');
    
    cout<<"\n";
    names.print();
    cout<<"\n";
    names.deleteFront();
    names.print();
}