#include<iostream>
using namespace std;
// Named structure.
struct Person
{
    string name;
    int age;
    float salary;
    string getName(){
      return name;  
    }
    int getAge(){
        return age;
    }
    float getSalary(){
        return salary;
    }
};
int add(int a , int b){
    return a+b;
}

int main(){
Person *p1 = new Person;
Person p[3];
add(2,3);
add(2.1,3.2);
add('a','b');
for(int i =0;i<3;i++){
   cin>> p[i].name>>p[i].age>>p[i].salary;

}
for(int i =0;i<3;i++){
    cout<<" Name: "<<p[i].name<<" Age: "<<p[i].age<<" Salary: "<<p[i].salary<<"\n";
}
p1->name = "Taha";
p1->age = 21;
p1->salary = 20000.5;
cout<<p1->getName()<<"\n";
cout<<p1->getAge()<<"\n";
cout<<p1->getSalary()<<"\n";
delete p1;
}