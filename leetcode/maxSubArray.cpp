#include "maxSubArray.h"

int Solution108::maxSubArray(vector<int>& nums) 
{
	//方法1：
	//int max_value = INT_MIN;
	//int sum = 0;
	//int result = 0;
	//for (int i = 0;i< nums.size();i++)
	//{
	//	sum += nums[i];
	//	if (max_value < nums[i])
	//	{
	//		max_value = nums[i];
	//	}
	//	if (sum > result)
	//	{
	//		result = sum;
	//	}
	//	else if(sum < 0)
	//		sum = 0;
	//}
	//if (max_value < 0)
	//{
	//	result = max_value;
	//}
	//return result;

	//方法2：
	int sum = 0;
	int result = INT_MIN;
	for (int i = 0;i< nums.size();i++)
	{
		sum = sum > 0 ? sum+nums[i] : nums[i];
		if(result < sum)
		{
			result = sum;
		}
	}
	return result;     
}