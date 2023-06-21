#include<iostream>
using namespace std;

// inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. 
// The derived class now is said to be inherited from the base class

#include<iostream>
using namespace std;

class Human {

    private:
    int height;

    public: 
    int weight;

    private:
    int age;

    public:
    int getAge() {
        return this->age;
    }

    void setWeight(int w) {
        this->weight = w;

    }

};

class Male: private Human {             // now all the members of parent class like weight will be marked as private and only be accessible inside this class only

    public:
    string color;

    void sleep() {
        cout << "Male Sleeping" << endl;
    }

    int getHeight() {
        return this->height;
    }


};



int main() {

    Male m1;
    m1.sleep();
    m1.weight;




/*
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(84);
    cout << object1.weight << endl;
    object1.sleep();
    */

    return 0;
}


