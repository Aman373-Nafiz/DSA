#include<iostream>
using namespace std;

template<class T>
void getValue(T arr[],int index){
 cin>>arr[index];

}

template<class T>
 T giveValue(T arr[],int index){
    return arr[index];
 }



int main(){

int *ar = new int[5];
string *phonebook = new string[5];
for(int i =0;i<5;i++){
   
    //getValue<int>(ar,i);
    getValue<string>(phonebook,i);
}
for(int i =0;i<5;i++){
    cout<<giveValue<string>(phonebook,i)<<"\n";
}
}