#include <iostream>

using namespace std;
void sqrval(const int &val)
{
	const_cast<int &> (val) = val * val;
}

int main()
{
	int x = 10;
	cout << "x before call:" << x << endl;
	sqrval(x);
	cout << "x after call: " << x << endl;
	
	return 0;
}

































