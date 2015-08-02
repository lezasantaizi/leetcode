#include "maxSubArray.h"

int maxSubArrayHelper(vector<int>& nums,int l,int r)
{
	if (l > r)
		return INT_MIN;
	int m = (l+r) / 2;

		int leftMax = 0;
		int sumNum = 0;
		for (int i = m-1;i>= l;i--) 
		{
			sumNum += nums[i];
			leftMax = max(leftMax, sumNum);
		}


		int rightMax = sumNum = 0;
		for (int i = m+1;i<= r;i++)
		{
			sumNum += nums[i];
			rightMax = max(rightMax, sumNum);
		}


		int leftAns = maxSubArrayHelper(nums, l, m - 1);
		int rightAns = maxSubArrayHelper(nums, m + 1, r);

		int result =  max(leftMax + nums[m] + rightMax, max(leftAns, rightAns));
		return result;
};

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
	//int sum = 0;
	//int result = INT_MIN;
	//for (int i = 0;i< nums.size();i++)
	//{
	//	sum = sum > 0 ? sum+nums[i] : nums[i];
	//	if(result < sum)
	//	{
	//		result = sum;
	//	}
	//}
	//return result;     

	//方法3：divide and conquer
	int result =  maxSubArrayHelper(nums, 0, nums.size() - 1);
	return result;
}