#include "search.h"

int Solution88::search(vector<int>& nums, int target) 
{
	int start = 0;
	int end = nums.size()-1;
	while (start <= end)
	{
		int median = (start+end)/2;
		if(nums[median] == target)
			return median;
		else if((nums[start] <= target && target < nums[median]) || (nums[start]> nums[median] && ((nums[start] <= target) || (nums[median] > target))))
		{
			end = median-1;
		}
		else
		{
			start = median+1;
		}
	}
	return -1;
}