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
    void addFront(const T& data){
        List *node = new List();
        node->data = data;
      if(head==NULL){
       
          head = node;
        node->next = node;
        
    
      }
      else{
         
          List * temp = head;
          while (temp->next!=head)
          {temp= temp->next;
          }
          temp->next = node;
          node->next = head;
          head = node;
           
          

        
      }

    }
    void addBack(const T& data){
         List *node = new List();
        node->data = data;
      if(head==NULL){
       
          head = node;
        node->next = node;
        
    
      }
      else{
        List *temp = head;
        while(temp->next!=head){
          temp = temp->next;
        }
        temp->next = node;
        node->next=head;
      }
    }
    bool IsEmpty(){
    return(head==NULL);
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

 void deleteFront(){
  List *temp = head;
  List
  while(temp->next!=head){
    temp = temp->next;
  }
  head = head->next;
  temp->next = head;
  delete temp1;
 }
  void print() {
         List* temp = head;
        int i =0;
        while (temp->next!=head) {
            cout << temp->data << " -> ";
          
            temp=temp->next;
        }
        cout<<temp->data<<" -> ";
        cout << "NULL" << endl;
    }
    
void deleteBack(){
  List * temp = head;
  List*temp1;
  while(temp->next!=head){
    temp1 = temp;
temp=temp->next;
  }
  temp1->next=head;
  delete temp;
  
}

    private:
    List *head;
};

int main(){
     List<int>l;
     List<char>ch;
    
    l.addFront(2);
    l.addFront(3);
    l.addFront(1);
    l.addFront(0);
    l.deleteBack();
    l.print();
    cout<<"\n";
    ch.addBack('a');
    ch.addBack('b');
    ch.addBack('c');
    ch.addBack('d');
    ch.deleteFront();
    ch.print();
}