#include "isHappy.h"


int discloseNumber(int n)
{
	if (0< n && n < 10)
	{
		return n*n;
	}
	int single = n%10;
	int sum  = 0;
	sum += single*single;
	sum += discloseNumber(n/10);
	return sum;
}

bool Solution2::isHappy(int n)
{

	int temp = discloseNumber(n);
	while(temp != 1 && temp != 4)
	{
		temp = discloseNumber(temp);
	}
	if(temp == 4)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}