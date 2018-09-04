#include <iostream>

using namespace std;

int main()
{
	int x = 3;
	int y = ++x;
	int i = 3;
	int j = i++;
	cout << x << y << endl;
	cout << i << j << endl;
	return 0;
}
