#include <iostream>
using namespace std;

class Mammal
{
	public:
		Mammal():itsAge(1){
			
		}
		virtual ~Mammal(){
			
		}
		virtual void Speak() const{
			cout << "Mammal speak!\n";
		}
	
	protected:
		int itsAge;
};

class Dog : public Mammal{
	public:
		void Speak() const{
			cout << "woof!\n";
		}
};

class Cat : public Mammal
{
	public:
		void Speak() const{
			cout << "Meow!\n";
		}
};

class Horse : public Mammal{
	public:
		void Speak() const{
			cout << "Winnie!\n";
		}
};

class Pig : public Mammal{
	public:
		void Speak() const{
			cout << "Oink!\n";
		}
};

int main()
{
	Mammal* theArray[5];
	Mammal* ptr;
	
	ptr = new Dog;
	theArray[0] = ptr;
	ptr = new Cat;
	theArray[1] = ptr;
	ptr = new Horse;
	theArray[2] = ptr;
	ptr = new Pig;
	theArray[3] = ptr;
	ptr = new Mammal;
	theArray[4] = ptr;
	
	for(int i = 0; i < 5; i++)
		theArray[i]->Speak();
	
	return 0;
}





































