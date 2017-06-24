#include <iostream>
#include <string.h>

using namespace std;

class Base
{
	public:
		virtual void show_message(void){
			cout << "Base class message" << endl;
		}
		virtual void show_reverse(void) = 0;
};

class Derived : public Base{
	public:
		virtual void show_message(void){
			cout<<"Derived class message"<< endl;
		}
		virtual void show_reverse(void){
			cout << strrev("Derived class message")<< endl;
		}
};

int main()
{
	Base *poly = new Derived;
	poly->show_message();
	poly->show_reverse();
		
	return 0;
}


























