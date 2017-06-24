









#include <iostream>
#include <string.h>

using namespace std;

class Mammal
{
	public:
		Mammal():itsAge(1){
			cout << "Mammal constructor..." << endl;
		}
		virtual ~Mammal(){
			cout << "Mammal destructor..."<< endl;
		}
		virtual void Move() const{
			cout << "Mammal move one step" << endl;
		}
		virtual void Speak() const{
			cout << "Mammal Speak!" << endl;
		}
	
	protected:
		int itsAge;
		
};

class Dog:public Mammal{
	public:
		Dog() {
			cout << "Dog Constructor..." <<endl; 			
		}
		virtual ~Dog(){
				cout << "Dog Destructor..." << endl;
			}
			
		void WagTail(){
			cout << "Wagging Tail..." << endl;
		}
		
		void Speak() const {
			cout << "Woof!" << endl;
		}
		
		void Move() const{
			cout << "Dog moves 5 step..." << endl;
		}
};

int main()
{
	Mammal *pDog = new Dog;
	pDog->Move();
	pDog->Speak();
	
	return 0;
}


































