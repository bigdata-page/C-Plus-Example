#include <iostream>
#include <string.h>

using namespace std;

class Base{
	public:
		virtual void who(void){
			cout << "Base\n";
		}
};

class first_d : public Base{
	public:
		void who(void){
			cout << "First derivation\n";
		}
};

class second_d : public Base{
	public:
		void who(void){
			cout << "Second derivation\n";
		}
};

int main(void)
{
	Base base_obj;
	Base *p;
	first_d first_obj;
	second_d second_obj;
	
	p = &base_obj;
	p->who();
	
	p = &first_obj;
	p->who();
	
	p = &second_obj;
	p->who();
	
	return 0;
}


























