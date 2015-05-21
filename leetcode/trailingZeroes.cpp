#include"trailingZeroes.h"

int Solution9::trailingZeroes(int n)
{
	if (n < 5)
		return 0;
	int sum = 0;
	
	while (n)
	{
		n = n / 5;
		sum += n;
	}
	return sum;
}