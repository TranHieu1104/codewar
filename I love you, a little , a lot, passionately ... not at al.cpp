#include <iostream>
using namespace std;

string how_much_i_love_you(int nb_petals) 
{
	switch(nb_petals % 6)
	{
		case 0: 
			return "not at all";
		case 1:
			return "I love you";
		case 2:
			return "a little";
		case 3:
			return "a lot";
		case 4: 
			return "passionately";	
		case 5:
			return "madly";
	}
}

int main()
{
	cout << how_much_i_love_you(7);
	return 0;
}
