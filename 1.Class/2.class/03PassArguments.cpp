#include <iostream>

using namespace std;

class BaseClass{
	int i;
	public:
		BaseClass(int n){
			cout << "Constructing base class\n";
			i = n;
		}
		~BaseClass(){
			cout << "Destructing base class\n";
		}
		void showi(){
			cout << i << "\n";
		}
};

class DerivedClass : public BaseClass{
	int j;
	public:
		DerivedClass(int n, int m): BaseClass(m){
			cout << "Constructing DerivedClass Class\n";
			j = n;
		}
		~DerivedClass(){
			cout << "Destructing DerivedClass class\n";
		}
		void showj(){
			cout << j << '\n';
		}
};

int main()
{
	DerivedClass o(10, 20);
	o.showi();
	o.showj();
	
	return 0;
}


