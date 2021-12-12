#include <iostream>
using namespace std;
int sumOdd(int N)
{
	int sum = 0;
	for(int i = 1; i <= N; i++)
	{
		if(i % 3 != 0)
		{
			sum += i;
		}
	}
	return sum;
}







int sum(int N) 
{
	int sum = 0;
	for(int i = 1; i <= N; i++) 
	{	
		sum += i;	
	}
	return sum;
}







int main() 
{
	cout << sumOdd(10);
	return 0;
}


