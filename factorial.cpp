#include <iostream>
using namespace std;

int factorial(int N) 
{
	int factorial = 1;
	for(int i = 2; i <= N; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}

int main() 
{	
	cout << factorial(4);
	return 0;
}


