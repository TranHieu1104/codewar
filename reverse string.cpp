#include <string>
using namespace std ; 

string reverseString (string str )
{
	std::reverseString(str.begin(),str.end());
	return str;
}

int main()
{
	cout << reverseString("hello") << endl;
	return 0;
}
