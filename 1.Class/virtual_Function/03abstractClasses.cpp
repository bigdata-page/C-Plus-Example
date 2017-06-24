#include <iostream>

using namespace std;

class Animal{
	public:
		Animal(int health = 100);
		
		
		virtual void Greet(){
			cout << "The animal Greet\n";
		};
		
		virtual void DisplayHealth() const;
		
	protected:
		int m_Health;
};

Animal::Animal(int health):m_Health(health){}

void Animal::DisplayHealth() const{
	cout << "Health: " << m_Health << endl;
}

class Orc : public Animal{
	public:
		Orc(int health = 120);
		virtual void Greet();
		virtual void Greet() const;
		virtual void DisplayHealth() {
			cout << "The Orc Class\n";
		};
};

Orc::Orc(int health):Animal(health)
{
	
}

void Orc::Greet() const
{
	//m_Health = 1000;
	cout << "The orc grunts hello.\n";
}
void Orc::Greet()
{
	m_Health = 1000;
	cout << "This no Const:The orc grunts hello.\n";
}

int main()
{
	Animal *pAnimal = new Orc();
	pAnimal->Greet();
	pAnimal->DisplayHealth();
	
	return 0;
}





































