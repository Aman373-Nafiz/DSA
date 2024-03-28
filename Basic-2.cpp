#include<iostream>
int main(){
    // relationship between pointer and array.
       int ar[5];
    for(int i =0;i<5;i++){
        cin>>ar[i];
    }
    // pointer ptr takes address of ar array.
    int *ptr = ar;
  
    for(int i =0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<"\n"<<endl;
    
    int *pt = ar;
    // Alternative use of index for array instead of indexing.
    for(int i =0;i<5;i++){
        cout<<*(pt+i)<<" ";
    }
}