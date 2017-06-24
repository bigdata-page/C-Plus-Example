#include <iostream>
#include <cstring>

using namespace std;

class BaseClass
{
	char author[80];
	public:
		void put_author(char *s){
			strcpy(author, s);
		}
		void show_author(){
			cout << author << endl;
		}
};

class DerivedClass : public BaseClass{
	char title[80];
	public:
		void put_title(char *num)
		{
			strcpy(title, num);
		}
		
		void show_title(){
			cout << "Title: ";
			cout << title << endl;
		}
};



int main()
{
	BaseClass *p;
	BaseClass baseObject;
	
	DerivedClass *dp;
	DerivedClass derivedObject;
	
	p = &baseObject;
	p->put_author("Tom Clancy");
	
	p = &derivedObject;
	p->put_author("William Shakespear");
	
	baseObject.show_author();
	derivedObject.show_author();
	cout << endl;
	
	dp = &derivedObject;
	dp->put_title("The tempest");
	p->show_author();
	dp->show_title();
	
	return 0;
}




























