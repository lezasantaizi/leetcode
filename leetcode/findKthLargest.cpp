#include "findKthLargest.h"

void func(vector<int>& nums,int k)
{
	int numLen = nums.size();
	int maxIndex = 0;
	if(2*k+1 < numLen) 
	{
		if(nums[k] < nums[2*k+1])
		{
			maxIndex = 2*k+1;
		}
		else
		{
			maxIndex = k;
		}
	}
	else
		return;

	if(2*k+2 <numLen)
	{
		if(nums[maxIndex] <nums[2*k+2])
		{
			maxIndex = 2*k+2;
		}
	}


	if (maxIndex != k)
	{
		int temp = nums[maxIndex];
		nums[maxIndex] = nums[k];
		nums[k] = temp;
		func(nums,maxIndex);
	}
}

int Solution61::findKthLargest(vector<int>& nums, int k) 
{
	int numsLen = nums.size();
	for (int i = (numsLen-2)/2;i>=0; --i)
	{
		func(nums,i);
	}
	for (int i = 0;i <k-1;i++)
	{
		swap(nums[numsLen -1-i],nums[0]);
		nums.pop_back();
		func(nums,0);
		
	}
	return nums[0];
}