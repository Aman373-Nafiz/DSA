#include<iostream>
using namespace std;
template<typename T>
class Calculator{
    public:
T add(T a, T b){
    return a+b;
}
    T subtract(T a ,T b){
        return a-b;

    }

    T multiply(T a, T b){
        return a*b;
    }
    T divison(T &a, T &b){
      T result;
        try {
            if (b == 0) {
                throw runtime_error("Division by zero");
            } else {
                result = a / b;
            }
        } catch (const exception& e ) {
            cerr << "Error: " << e.what << endl;
            result = static_cast<T>(-1);
        }
        return result;
    }
    };


int main(){
    Calculator<int> * c= new Calculator<int>();
    cout<<c->add(1,2);
    Calculator<double>d;
    cout<<d.multiply(4.5,1.25);
}