
/* 
Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes 
as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and 
set methods.
*/
#include <iostream>
using namespace std;

class EncapsulationExample {
private:
	// we declare a as private to hide it from outside
	int a;

public:
	// set() function to set the value of a
	void set(int x)
	{
		a = x;
	}

	// get() function to return the value of a
	int get()
	{
		return a;
	}
};

// main function
int main()
{
	EncapsulationExample e1;

	e1.set(10);

	cout<<e1.get();
	return 0;
}

//In the this program, the variable a is made private so that this variable can be accessed and manipulated only by using the methods get() and set() that are present within the class. Therefore we can say that, the variable a and the methods set() as well as get() have binded together that is nothing but encapsulation.