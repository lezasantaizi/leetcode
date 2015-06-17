#include"threeSum.h"

vector<vector<int>> Solution51::threeSum(vector<int>& nums)
{
	int dataLen = nums.size();
	vector<vector<int>> result;
	if (dataLen < 3)
		return result;
	sort(nums.begin(), nums.end());
	int front = 0, end = dataLen - 1;

	for (int i = 0; i < dataLen; i++)
	{
		if (i>0 && nums[i] == nums[i - 1])
			continue;
		front = i+1;
		end = dataLen - 1;
		while (front<end)
		{
			if (nums[front] + nums[end] == -1 * nums[i])
			{
				vector<int> temp;
				temp.push_back(nums[i]);
				temp.push_back(nums[front]);
				temp.push_back(nums[end]);
				result.push_back(temp);
				front++;
				while (front<end)
				{
					if (nums[front] == nums[front - 1])
						front++;
					else
						break;
				}

			}
			else if (nums[front] + nums[end] > -1 * nums[i])
				end--; 
			else 
				front++;
		}
	}
	return result;

	//int dataLen = nums.size();
	//vector<vector<int>> result;
	//if (dataLen < 3)
	//	return result;
	//unordered_set<int> temp;
	//for (int i = 0; i < dataLen; i++)
	//{
	//	temp.clear();
	//	for (int j = i+1; j < dataLen; j++)
	//	{
	//		if (temp.find(nums[j]) == temp.end())
	//		{
	//			temp.insert(0-nums[i] - nums[j]);
	//		}
	//		else
	//		{
	//			vector<int> temp2;
	//			temp2.push_back(nums[i]);
	//			temp2.push_back(nums[j]);
	//			temp2.push_back(-1 * (nums[i] + nums[j]));
	//			sort(temp2.begin(), temp2.end());
	//			result.push_back(temp2);
	//		}

	//	}
	//}
	//return result;

}