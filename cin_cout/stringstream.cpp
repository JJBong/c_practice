#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string mystr;
	int num;
	cout << "How many? ";
	getline(cin, mystr);
	stringstream(mystr) >> num;
	cout << "OK," << num << endl;
	return 0;
}
