/*
The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics. 
Types of Polymorphism
-Compile-time Polymorphism/ static polymorphism
-Runtime Polymorphism / dynamic polymorphism

1. Compile-Time Polymorphism
This type of polymorphism is achieved by function overloading or operator overloading.

    A. Function Overloading
    When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function 
    Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.

    B. Operator Overloading
    C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. For example, we can make 
    use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. So a single 
    operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 
*/


#include <bits/stdc++.h>
using namespace std;
class Geeks {
public:

	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};

// Driver code
int main()
{
	Geeks obj1;

	
	obj1.func(7);

	obj1.func(9.132);

	obj1.func(85, 64);
	return 0;
}

