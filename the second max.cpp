#include <iostream>
using namespace std;

int n, a[1000];
int main()
{
	cin >> n;
	int maxx = -100000000;
	int secondMax = -100000000;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i] > maxx)
		{
			secondMax = maxx;
			maxx = a[i];
		}
	}
}
