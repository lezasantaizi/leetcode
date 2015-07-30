#include "minPathSum.h"

int func(int m,int n, vector<vector<int>>& grid,vector<vector<int>>& path_sum)
{
	if (m <=0 || n <= 0)
	{
		return -1;
	}
	if (path_sum[m-1][n-1] == 0)
	{
		int down = func(m-1,n,grid,path_sum);
		int right = func(m,n-1,grid,path_sum);
		if(down== -1 || right == -1)
			path_sum[m-1][n-1] = grid[m-1][n-1] + max(down,0) + max(right,0);
		else
			path_sum[m-1][n-1] = grid[m-1][n-1] + min(down,right);
	}
	return path_sum[m-1][n-1];
}

int Solution106::minPathSum(vector<vector<int>>& grid) 
{
	int m = grid.size();
	int n = grid[0].size();
	if(m == 1 && n == 1)
		return grid[0][0];
	vector<vector<int>> path_sum(m,vector<int>(n));
	int result = func(m,n,grid,path_sum);
	return result;
}