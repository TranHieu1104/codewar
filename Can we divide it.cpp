#include <iostream>
using namespace std;

bool isDivideBy(int number, int a, int b)
{
	if(number % a == 0 && number % b == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	cout << isDivideBy(12,4,3) << endl; 
	cout << true;
	return 0;
}
