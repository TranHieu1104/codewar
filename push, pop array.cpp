#include <iostream>
#include <vector>
using namespace std;

int stack[1000000];
int t, top = 0;

void push(int x)
{
	top++;
	stack[top] = x;
}

int pop()
{
	int x = stack[top]; //lay di phan tu tren cung
	top--; //xoa di phan tu tren cung
	return x;
}
int main()
{
	cin >> t;
	while(t--)
	{
		int a, x;
		cin >> a;
		if(a == 1)
		{
			cin >> x;
			push(x);
		}
		else
		{
			cout << pop() << '\n';
		}
	}
	
	cout << '\n';
	vector<int> v;
	while(top > 0)
	{
		v.push(pop());
	}
	for(int i = v.size() - 1; i >= 0, --i)
	{
		cout << v
	}
	return 0;
}


