#include "rob.h"

#define maxData(x1,x2) (x1)>(x2)? (x1):(x2)
int Solution4::rob(int* nums, int numsSize)
{
	int xn_1 = 0, xn_2 = 0;
	for (int i = 0 ;i< numsSize ;i++)
	{
		int xn_0 = maxData(xn_1,xn_2+nums[i]);
		
		xn_2 = xn_1;
		xn_1 = xn_0;
	}
	return xn_1;
}