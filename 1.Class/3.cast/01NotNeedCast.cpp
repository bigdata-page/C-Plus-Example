#include <iostream>

using namespace std;

class Base{
	public:
		Base(){};
	virtual ~Base(){};
};

class Derived : public Base{
	public:
		Derived(){
			
		}
	virtual ~Derived(){
		
	}
};

int main(int argc, char **argv)
{
	Base *b;
	Derived* d = new Derived();
	
	b = d;
	d = static_cast<Derived*>(b);
	
	Base base;
	Derived derived;
	
	Base& br = base;
	Derived& dr = static_cast<Derived&>(br);
	//Derived& dr = static_cast<Derived&>(br);
	
	int i = 3;
	double result = static_cast<double>(i)/10;
	cout << "Result = " << result << endl;
	
	result = ((double)i)/10;
	cout << "Result = " << result << endl;
	
	return 0;
	
	
	
}
























