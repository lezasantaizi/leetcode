#include "searchInsert.h"

int Solution54::searchInsert(vector<int>& nums, int target) 
{
	int len = nums.size();
	if(len <= 0)
		return -1;
	if (nums[0] > target) {
		return 0;
	}
	if (nums[len-1] < target) {
		return len;
	}
	int i = 0;
	int j = len -1;
	while(i <= j)
	{
		int center = (i+j)/2;
		if(nums[center] == target)
			return center;
		else if(nums[center]>  target)
			j = center-1;
		else
			i = center+1;
	}
	return i;
}