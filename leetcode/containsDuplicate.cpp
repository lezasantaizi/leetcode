#include "containsDuplicate.h"


bool Solution23::containsDuplicate(vector<int>& nums)
{
	unordered_set<int> temp;
	for (int i = 0 ;i< nums.size(); i++)
	{
		if (temp.count(nums[i]))
		{
			return true;
		}
		temp.insert(nums[i]);
	}
	return false;
}