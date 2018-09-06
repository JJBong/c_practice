#include <iostream>
#include <string>

using namespace std;

int main()
{
        string mystr;
        cout << "What's your name?";
        cin >>  mystr;
        cout << "Hello " << mystr << ".\n";
        cout << "What is your favorite team? ";
	cin >> mystr;
        cout << "I like " << mystr << " too!\n";
        return 0;
}
