/*
2. Run-time Polymorphism
This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism. The function call is
resolved at runtime in runtime polymorphism. In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after 
deducing it at runtime.

    A. Function Overriding
    Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

   
*/
#include <iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal {
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};

int main() {

    Dog obj;
    obj.speak();
    obj.Animal:: speak();


    return 0;
}