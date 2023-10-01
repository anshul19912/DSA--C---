#include<iostream>
using namespace std;
//When a class inherits another class, it is known as a single inheritance. 
//In the example given below, Dog class inherits the Animal class, so there is the single inheritance.

class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};


int main() {

    Dog d;
    d.speak();
    cout << d.age << endl;


    return 0;
}