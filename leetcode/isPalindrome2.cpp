#include "isPalindrome2.h"

bool Solution53::isPalindrome(int x) 
{
	//if(x < 0)
	//	return false;
	//if(x < 10)
	//	return true;
	//int y = x;
	//int count = 0;
	//int cnt = 0;
	//int z = 0;
	//while(x)
	//{
	//	count++;
	//	x = x/10;
	//}
	//x = y;
	//while (x)
	//{
	//	cnt++;
	//	z = z* 10 + (x%10);
	//	x = x / 10;
	//	if(cnt == count/2)
	//	{
	//		if(count %2 == 1)
	//		{
	//			x = x / 10;
	//			return x == z;
	//		}
	//		else
	//		{
	//			return x== z;
	//		}
	//	}
	//}

	//·½·¨2£º
	if(x<0)
		return false;
	int z=x;
	long y=0;
	while(z!=0)
	{
		y=y*10+z%10;
		z=z/10;
	}
	if(y>INT_MAX || y<INT_MIN || x!=y)
		return false;
	else 
		return true;
	
}