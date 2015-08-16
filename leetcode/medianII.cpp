#include"medianII.h"

vector<int> Solution115::medianII(vector<int> &nums)
{
	vector<int> result;
	int num_len = nums.size();
	if (num_len == 0)
		return result;
	int median = nums[0];
	result.push_back(median);
	priority_queue<int>	max_heap, min_heap;
	max_heap.push(median);
	for (int i = 1; i < num_len; i++)
	{
		if (nums[i] < median)
			max_heap.push(nums[i]);
		else
			min_heap.push(-1 * nums[i]);

		int max_heap_size = max_heap.size();
		int min_heap_size = min_heap.size();
		if (max_heap_size - min_heap_size >= 2)
		{
			int temp = max_heap.top();
			max_heap.pop();
			min_heap.push(-1*temp);
			median = max_heap.top();
		}
		else if (min_heap_size - max_heap_size >= 1)
		{
			int temp = min_heap.top();
			min_heap.pop();
			max_heap.push(-1 * temp);
			median = max_heap.top();
		}
		result.push_back(median);
	}
	return result;
}