#include <iostream>
#include <cstring>

using namespace std;

class BaseClass
{
	char author[80];
	public:
		BaseClass()
		{
			cout <<"The BaseClass " << endl;
		}
		void put_author(char *s){
			strcpy(author, s);
		}
		void show_author(){
			cout << "BaseClass : show_author " << endl;
		}
		
		virtual void test() = 0;
	
};

class DerivedClass : public BaseClass{
	char title[80];
	public:
		DerivedClass()
		{
			cout << "DerivedClass: a= "<< endl;
		}
		void put_author(char *num)
		{
			strcpy(title, num);
		}
		void show_author(){
			cout << "DerivedClass : show_author " << endl;
		}virtual void show_author(int a){
			cout << "DerivedClass: show_author a = "<< a << endl;;
		}
		void test()
		{
			cout << "The thest" << endl;
		}
};



int main()
{
	BaseClass *p;
	int b = 10;
	cout << "----Separator----" << endl;
	//BaseClass baseObject;
	DerivedClass q;
	BaseClass *test = new DerivedClass();
	//BaseClass *test = &q;
	test->test();
	test->show_author();
	
	return 0;
}




























