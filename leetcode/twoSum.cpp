#include"twoSum.h"

vector<int> Solution50::twoSum(vector<int>& nums, int target)
{
	int dataLen = nums.size();
	vector<pair<int, int> > sorted_numbers;
	for (int i = 0; i < dataLen; ++i) {
		sorted_numbers.emplace_back(nums[i], i+1);
	}
	sort(sorted_numbers.begin(), sorted_numbers.end());
	vector<int> result;
	int i = 0, j = dataLen-1;
	while (i < j)
	{
		if (sorted_numbers[i].first + sorted_numbers[j].first < target)
			i++;
		else if (sorted_numbers[i].first + sorted_numbers[j].first > target)
			j--;
		else
		{
			result.push_back(sorted_numbers[i].second);
			result.push_back(sorted_numbers[j].second);
			return result;
		}	 
	}
	sort(result.begin(), result.end());



//方法2:	非常简单却很凑巧的一个方法
//	std::unordered_map<int, int> store;
//	for (int i = 0; i < nums.size(); ++i)
//	{
//		auto itr = store.find(nums[i]);
//		if (itr != store.end())
//			return std::vector<int> {itr->second + 1, i + 1};
//		else
//			store[target - nums[i]] = i;
//	}
}