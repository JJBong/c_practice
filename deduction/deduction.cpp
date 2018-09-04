#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a = 5;
	auto b = a;
	cout << a << typeid(a).name() << b << typeid(b).name()<< endl;
	char c = 'a';
	decltype(c) d;
	cout << c << typeid(c).name() << d << typeid(d).name() << endl;
}
