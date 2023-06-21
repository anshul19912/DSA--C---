#include<iostream>
using namespace std;
//When there is a chain of inheritance, it is known as multilevel inheritance. As you can see in the example given below, germansephard class inherits the Dog class which again inherits the Animal class, so there is a multilevel inheritance.

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
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }

};

class GermanShepherd: public Dog {


};

int main() {

    GermanShepherd g;
    g.speak();
    g.bark();


    return 0;
}