#include <iostream>
using namespace std;

int getRealFloor(int f) 
{
	if(f <= 13 && f > 0)
  {
  	f--;
  }
  else if(f > 13)
  {
  	f -= 2;
  }
  return f;
}

int main()
{
	cout << getRealFloor(14);
	return 0;
}
