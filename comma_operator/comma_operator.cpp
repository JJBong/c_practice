#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a, b;
	a = (b=3, b+2);
	cout << a << typeid(a).name() << typeid(b).name() << endl;
}
