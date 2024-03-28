#include <iostream>
using namespace std;



template<class T>
class ArrayStack{
    public:
    int SIZE;
    ArrayStack(T size){
        SIZE = size;
a = new T[size];
    }
    void push(T value){
 if(top==SIZE-1)
  {    cout<<"Stack is full!\n";
  }
   else
  {
    top++;
    a[top]=value;
  }
}

void pop()
{
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  top--;
}
void display(){
     if(isempty())
 {
    cout<<"Stack is empty!\n";
 }
 else
 {
  for(int i=0 ; i<=top; i++)
    cout<<a[i]<<" ";
   cout<<"\n";
  }
}
bool isempty(){
 if(top==-1)
  return true;
  else
  return false;
}
private:
T *a;
int top = -1;
};

int main(){
    ArrayStack<int>a(5);
    a.push(2);
    a.push(3);
    a.push(4);
    a.pop();
    a.display();


}