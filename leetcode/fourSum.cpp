#include"fourSum.h"

vector<vector<int>> Solution52::fourSum(vector<int>& nums, int target)
{
	//vector<vector<int>> result;
	//int dataLen = nums.size();
	//if (dataLen < 4)
	//	return result;

	//sort(nums.begin(), nums.end());
	//for (int i = 0; i < dataLen; i++)
	//{
	//	while (i> 0 && nums[i - 1] == nums[i] && i < dataLen)
	//	{
	//		i++;
	//	}
	//	for (int j = i+1; j < dataLen; j++)
	//	{
	//		while (j > i+1 && nums[j - 1] == nums[j] && j < dataLen)
	//		{
	//			j++;
	//		}
	//		int front = j+1;
	//		int end = dataLen - 1;
	//		while (front < end)
	//		{
	//			if (nums[i] + nums[j] + nums[front] + nums[end] == target)
	//			{
	//				vector<int> temp;
	//				temp.push_back(nums[i]);
	//				temp.push_back(nums[j]);
	//				temp.push_back(nums[front]);
	//				temp.push_back(nums[end]);
	//				result.push_back(temp);
	//				front++;
	//				while (nums[front-1] == nums[front] && front < end)
	//				{
	//					front++;
	//				}
	//					
	//			}
	//			else if (nums[i] + nums[j] + nums[front] + nums[end] < target)
	//			{
	//				front++;
	//			}
	//			else
	//			{
	//				end--;
	//			}
	//		}
	//	}
	//}
	//return result;

	//·½·¨2£º

	vector<vector<int>> result;
	int dataLen = nums.size();
	if (dataLen < 4)
		return result;
	sort(nums.begin(), nums.end());
	unordered_map<int, vector<pair<int, int>>> temp;
	for (int i = 0; i < dataLen; i++)
	{
		for (int j = i + 1; j < dataLen; j++)
		{
			temp[nums[i] + nums[j]].push_back(pair<int, int>(i, j));
		}
	}

	for (int i = 0; i < dataLen; i++)
	{
		for (int j = i + 1; j < dataLen; j++)
		{
			int diff = target - nums[i] - nums[j];
			
			if (temp.find(diff) != temp.end())
			{
				vector<pair<int, int>> tempPair = temp[diff];
				
				for (int iter = 0; iter < tempPair.size(); iter++)
				{
					if (j >= tempPair[iter].first)
						continue;
					result.push_back({ nums[i], nums[j], nums[tempPair[iter].first], nums[tempPair[iter].second] });
				}
			}
		}
	}
	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end());
	return result;

}
