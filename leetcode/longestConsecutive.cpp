#include "longestConsecutive.h"

int Solution44::findLongNum(int startData,bool isUp)
{
	int result = 0;
	while (data.find(startData) != data.end())
	{
		result++;
		data.erase(startData);
		if (isUp)
		{
			startData +=1;
		}
		else
		{
			startData -= 1;
		}
	}
	return result;
}

int Solution44::longestConsecutive(vector<int>& nums)  
{
	int dataLen = nums.size();
	int result = 0;
	for (int i = 0 ; i < dataLen; i++)
	{
		data.insert(nums[i]);
	}
	for (int i = 0 ;i< dataLen; i++)
	{
		int upLen = findLongNum(nums[i],true);
		int downLen = findLongNum(nums[i]-1,false);
		if(upLen+downLen > result)
			result = upLen+ downLen;
	}
	return result;
}