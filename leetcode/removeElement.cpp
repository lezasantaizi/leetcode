#include "removeElement.h"

int Solution33::removeElement(vector<int>& nums, int val) 
{
	int numLen = nums.size();
	int moveLen = 0;
	int stableIndex = 0;
	for (int i = 0; i< numLen;i++)
	{
		if (nums[i] == val)
		{
			moveLen++;
		}
		else
		{
			stableIndex++;
		}
		if(stableIndex+moveLen <numLen)
			nums[stableIndex] = nums[stableIndex+moveLen];
		else
		{
			break;
		}

	}
	return numLen - moveLen;
}