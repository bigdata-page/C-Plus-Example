#include <iostream>
using namespace std;

int main()
{
	char a, b, c;
	
	cout << "Enter three letters:";
	
	cin.get(a).get(b).get(c);
	
	cout << "a: " << a << "\nb: ";
	cout << b << "\n c: " << c << endl;
	
	return 0;
}


