#include <iostream>
using namespace std;

int giaiThua(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
        {
            result *= i;
        }
	return result;
}

int giaiThua2(int n)
{
	if(n==0) return 1;
	int n = giaiThua2(n-1);
}

int main()
{
    cout << giaiThua2(7) << '\n';
    return 0;
}
