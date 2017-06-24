#include <iostream>
using namespace std;

void sqrval(const int *val)
{
	int *p;
	
	//p = (int *)val;
	p = const_cast<int *>(val);
	
	*p = *val * *val;
}

int main(){
	int x = 10;
	cout << "x before call:" << x << endl;
	sqrval(&x);
	cout << "x after all:" << x << endl;
	
	return 0;
}

























