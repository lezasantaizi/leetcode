#include "containsNearbyDuplicate.h"

bool Solution29::containsNearbyDuplicate(vector<int>& nums, int k) 
{
	int numLen = nums.size();
	if (numLen <= k )
	{
		k = numLen-1;
	}
	for (int i = 0; i< numLen-1; i++)
	{
		for (int j = i+1 ;j <= i+k && i+k<numLen;j++)
		{
			if(nums[i] == nums[j])
				return true;
		}
		
	}
	return false;
}