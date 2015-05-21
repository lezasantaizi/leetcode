#include"permuteUnique.h"

void subFunc(vector<int>nums,int start ,int end,vector<vector<int>>& result)
{
	if (start == end - 1)
	{
		result.push_back(nums);
		return;
	}
		
	for (int i = start; i < end; i++)
	{
		if (i != start && nums[i] == nums[start])continue;
		swap(nums[start], nums[i]);
		subFunc(nums, start + 1, end, result);

	}
}

vector<vector<int>> Solution8::permuteUnique(vector<int>& nums)
{
	vector<vector<int>> result;
	
	subFunc(nums, 0, nums.size(),result);
	return result;

}