#include <iostream>
using namespace std;

class A{

    public:
    // Empty Constructor.
    A(){}
    // Argument passed Constructor.
    A(int y, int z){
    a = y;
    b = z;
    }
    int a,b;
    
    void set_x(int aa){
        x = aa;
    }
    char get_x(){
        return x;
    }
    private:
    char x;
};

// Class B inherited Class A
class B : public A{
    public:
 int a,b,c;
 // function overriding: Polymorphism for getter-setter.
    void set_x(int aa){
        x = aa;
    }
    char get_x(){
        return x;
    }
    // private and public for encapsulation
    private:
    char x;
};
class C{
    
    public:
    C(int a,int b){
        this->a = a;
        this->b = b;
    }
    
   
    int a,b;
    void set_x(int aa){
        x = aa;
    }
    char get_x(){
        return x;
    }
    private:
    char x;
};
int main(){
// Object made from A object.
A a;
a.a = 101;
a.b = a.a + 1;
A obj(7,8);
cout<< a.a<<" "<<a.b<<endl;
cout<<obj.a<<endl;
cout<<"\n";
a.set_x('T');
cout<<a.get_x()<<endl;

// Object made from B class
B bar;
bar.c = 11;
bar.a = 1323;
cout<<bar.c<<endl;
cout<<bar.a<<endl;

// Dynamic object made from C class
C *aa = new C;
aa->a= 123;
cout<<aa->a<<" ";
aa->set_x('A');
cout<<aa->get_x()<<" ";
}