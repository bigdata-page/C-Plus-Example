#include <iostream>

using namespace std;

class BaseClass{
	int i,j;
	public:
		BaseClass(int x, int y){
			i = x;
			j = y;
		}
		void show(){
			cout << "i = " << i << "j = " << j << '\n';
		}
};

class DerivedClass : public BaseClass{
	int k;
	public:	
		DerivedClass(int a, int b, int c):BaseClass(b, c){
			k = a;
		}
		void show(){
			cout << "k = " << k << ' ';
			//show();
		}
};

int main()
{
	DerivedClass ob(1, 2, 3);
	ob.show();
	return 0;
}































