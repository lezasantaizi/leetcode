#include"climbStairs.h"

/*
f(n) = f(n-1)+f(n-2);
*/

int Solution25::climbStairs(int n)
{
	int a = 0;
	int b = 1;

	for (int i = 0; i < n; i++)
	{
		int sum = a + b;
		a = b;
		b = sum;
	}
	return b;
}