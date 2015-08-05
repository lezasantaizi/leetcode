#include "rob2.h"

int func(vector<int>& nums,int start,int end)
{
	int fn_0 = 0, fn_1 = 0;
	for (int i = start ;i<end;i++)
	{
		int temp = max(fn_0,fn_1+nums[i]);
		fn_1 = fn_0;
		fn_0 = temp;
	}
	return fn_0;
}

int Solution112::rob(vector<int>& nums)
{
	int len = nums.size();
	if (len == 1)
	{
		return nums[0];
	}
	int result = max(func(nums,0,len - 1),func(nums,1,len));
	return result;
}