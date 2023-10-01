/* A virtual function a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.
Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
They are mainly used to achieve Runtime polymorphism
Functions are declared with a virtual keyword in base class.
The resolving of function call is done at Run-time. */




#include <iostream>
using namespace std;

class base {
public:
     void print()
    {
        cout << "print base class" << endl;
    }

    void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base {
public:
     void print()
    {
        cout << "print derived class" << endl;
    }

    void show()
    {
        cout << "show derived class" << endl;
    }
};

int main()
{
    base* bptr=new derived();                  // agar hum base class ka hi object bnayege toh dono usi ke method call hoinge. but agar derived class ka object bnayenge toh  derived class wla print call hoga qki base class wla print virtual hai

    // virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();
}

/*
Output:
print derived class
show base class
*/
