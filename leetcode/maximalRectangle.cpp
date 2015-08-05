#include "maximalRectangle.h"

int Solution113::maximalRectangle(vector<vector<char>>& matrix) 
{
	int m = matrix.size();
	if(m == 0)
		return 0;
	int n = matrix[0].size();

	vector<int> left(n,0), right(n,n), height(n,0);
	int result = 0;
	for (int i = 0; i< m ;i++)
	{
		int cur_value = 0;
		for (int j = 0; j< n; j++)
		{
			if (matrix[i][j] == '1')
				height[j]++;
			else 
				height[j] = 0;
		}

		for (int j = 0 ; j< n; j++)
		{
			if (matrix[i][j] == '1')
			{
				left[j] = max(left[j],cur_value);
			}
			else
			{
				left[j] = 0;
				cur_value = j+1;
			}
		}
		cur_value = n;
		for (int j = n-1;j>= 0; j--)
		{
			if (matrix[i][j] == '1')
			{
				right[j] = min(right[j],cur_value);
			}
			else
			{
				right[j] = n;
				cur_value = j;
			}
		}
		
		for (int j = 0; j< n; j++)
		{
			result = max(result,(right[j] - left[j]) * height[j]);
		}
	}
	return result;
}