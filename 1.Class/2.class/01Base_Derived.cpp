#include <iostream>
using namespace std;

class BaseClass{
	int i,j;
	public:
		void set(int a, int b)
		{
			i = a;
			j = b;
		}
		void show()
		{
			cout << "BaseClass: i = " << i << " j = " << j << endl;
		}
};

class DerivedClass : public BaseClass
{
	int k;
	public:
		DerivedClass(int x){
			k = x;
		}
		void showk(){
			cout << "DerivedClass: k = " << k << endl;
		}
};

int main()
{
	DerivedClass ob(3);
	
	ob.set(1, 2);
	ob.show();
	
	ob.showk();
	
	return 0;
}




















