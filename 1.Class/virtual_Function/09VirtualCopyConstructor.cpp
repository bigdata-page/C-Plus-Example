#include <iostream>
#include <string.h>

using namespace std;

class Mammal
{
  public:
     Mammal():itsAge(1) { cout << "Mammal constructor..." << endl; }
     virtual ~Mammal() { cout << "Mammal destructor..." << endl; }
     Mammal (const Mammal & rhs);
     virtual void Speak() const { cout << "Mammal speak!" << endl; }
     virtual Mammal* Clone() { return new Mammal(*this); }
     int GetAge()const { return itsAge; }
  protected:
     int itsAge;
};

Mammal::Mammal (const Mammal & rhs):itsAge(rhs.GetAge())
{
   cout << "Mammal Copy Constructor..." << endl;
}

class Dog : public Mammal
{
  public:
    Dog() { cout << "Dog constructor..." << endl; }
    virtual ~Dog() { cout << "Dog destructor..." << endl; }
    Dog (const Dog & rhs);
    void Speak()const { cout << "Woof!" << endl; }
    virtual Mammal* Clone() { return new Dog(*this); }
};

Dog::Dog(const Dog & rhs):
Mammal(rhs)
{
   cout << "Dog copy constructor..." << endl;
}

class Cat : public Mammal
{
  public:
    Cat() { cout << "Cat constructor..." << endl; }
    ~Cat() { cout << "Cat destructor..." << endl; }
    Cat (const Cat &);
    void Speak()const { cout << "Meow!" << endl; }
    virtual Mammal* Clone() { return new Cat(*this); }
};

Cat::Cat(const Cat & rhs):
Mammal(rhs)
{
   cout << "Cat copy constructor..." << endl;
}

enum ANIMALS { MAMMAL, DOG, CAT};
const int NumAnimalTypes = 3;
int main()
{
   Mammal *theArray[NumAnimalTypes];
   Mammal* ptr;

   ptr = new Dog;
   theArray[0] = ptr;
   ptr = new Cat;
   theArray[1] = ptr;
   ptr = new Mammal;
   theArray[2] = ptr;

   Mammal *OtherArray[NumAnimalTypes];
   for (int i=0;i<NumAnimalTypes;i++)
   {
      theArray[i]->Speak();
      OtherArray[i] = theArray[i]->Clone();
   }
   for (int i=0;i<NumAnimalTypes;i++)
      OtherArray[i]->Speak();
  
   return 0;
}






































