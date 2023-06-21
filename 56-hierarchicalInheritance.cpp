#include<iostream>
using namespace std;
//When two or more classes inherits a single class, it is known as hierarchical inheritance. In the example given below, C and B classes inherits the A class, so there is hierarchical inheritance.
class A {

    public:
    void func1() {
        cout << "Inside Funcion 1" << endl;
    }

};

class B: public A {
    public:
    void func2() {
        cout << "Inside Funcion 2" << endl;
    }
};

class C: public A {
    public:
    void func3() {
        cout << "Inside Funcion 3" << endl;
    }
};

int main() {

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;
}