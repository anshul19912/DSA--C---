/* Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or 
   implementation. 
   Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed of the 
   car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he 
   does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. This is what 
   abstraction is.           */

#include <iostream>
using namespace std;

class Summation {
private:
	// private variables
	int a, b, c;
public:
	void sum(int x, int y)
	{
		a = x;
		b = y;
		c = a + b;
		cout<<"Sum of the two number is : "<<c<<endl;
	}
};
int main()
{
	Summation s;
	s.sum(5, 4);
	return 0;
}


// In the this example, we can see that abstraction has achieved by using class. The class ‘Summation’ holds the private members a, b and 
// c, which are only accessible by the member functions of that class.