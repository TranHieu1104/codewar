#include <iostream>
using namespace std;

int area_largest_square(int r)
{
	return 2 * r * r;
}

int main()
{
	cout << area_largest_square(4);
	return 0;
}
