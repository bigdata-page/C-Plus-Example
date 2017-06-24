#include <iostream>

using namespace std;

class Base
{
	public:
		void display(void)
		{
			cout << "This is the base class" << endl;
		};
};

class Derived: public Base{
	public: 
		void display(void){
			cout << "This is the derived class" << endl;
		};
};

int main(void)
{
	Derived my_class;
	
	my_class.display();
}



































