#include<iostream>
using namespace std;

int main()
{
	int a, c=0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		printf("%2d ", i);
		if (i % a == 0)printf("\n");
	}

}