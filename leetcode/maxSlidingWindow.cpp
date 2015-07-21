#include "maxSlidingWindow.h"

vector<int> Solution91::maxSlidingWindow(vector<int>& nums, int k) 
{
	vector<int> result ;
	deque<int> win_max_value;
	int nums_len = nums.size();
	for (int i = 0 ;i< nums_len;i++)
	{
		while (win_max_value.empty() == false && win_max_value.back() < nums[i])
		{
			win_max_value.pop_back();
		}
		win_max_value.push_back(nums[i]);
		if (i >= k-1)
		{
			result.push_back(win_max_value.front());
			if (nums[i-k+1] == win_max_value.front())
				win_max_value.pop_front();
		}
	}
	return result;
}