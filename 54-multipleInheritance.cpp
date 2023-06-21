#include<iostream>
using namespace std;
//  When a class is inherited form one or more than 1 parent class then it is known as multiple inheritance.
//  Example: the class Hybrid is inherited from both Animal and Human class

class Animal {

    public:
    int age;
    int weight;


    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human {

};


int main() {

    Hybrid obj1;
    obj1.speak();
    obj1.bark();


    return 0;
}