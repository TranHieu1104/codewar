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

int main()
{
    cout << giaiThua(7) << '\n';
    return 0;
}
