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

	//int temp = discloseNumber(n);
	//while(temp != 1 && temp != 4)
	//{
	//	temp = discloseNumber(temp);
	//}
	//if(temp == 4)
	//{
	//	return 0;
	//}
	//else
	//{
	//	return 1;
	//}

	while(n != 1 && n!= 4)
	{
		int next_n = 0;
		while(n > 0)
		{
			int k = n % 10;
			next_n += k*k;
			n /= 10;
		}
		n = next_n;
		printf("%d\n",n);
	}

	if (n == 1)
		return true;
	else
		return false;

}