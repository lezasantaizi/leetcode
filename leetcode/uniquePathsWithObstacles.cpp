#include "uniquePathsWithObstacles.h"

int func2(int m, int n, vector<vector<int>>& grid, vector<vector<int>>& path_num)
{
	if (m <= 0 || n <= 0 || grid[m-1][n-1] == 1)
	{
		return 0;
	}
	if (path_num[m-1][n-1] == 0)
	{
		int flag = 0;
		if(m == 1)
		{
			for (int i = 0 ;i< n;i++)
			{
				if(grid[m-1][i] == 1)
				{
					flag = 1;
					break;;
				}
			}
			if (flag == 1)
			{
				path_num[m-1][n-1] = 0;
			}
			else
			{
				path_num[m-1][n-1] = 1;
			}
			return path_num[m-1][n-1] ;
			
		}
		flag = 0;
		if(n == 1)
		{
			for (int i = 0 ;i< m;i++)
			{
				if (grid[i][n-1] == 1)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 1)
			{
				path_num[m-1][n-1] = 0;
			}
			else
			{
				path_num[m-1][n-1] = 1;
			}
			return path_num[m-1][n-1] ;
		}
		int right = func2(m,n-1,grid, path_num);
		int down = func2(m-1,n,grid,path_num);
		path_num[m-1][n-1] = right+down;
	}
	return path_num[m-1][n-1];
}

int Solution105::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
{
	//方法1：
	//int m = obstacleGrid.size();
	//int n = obstacleGrid[0].size();
	//vector<vector<int>> path_num(m,vector<int>(n));
	//int result = func2(m,n,obstacleGrid,path_num);
	//return result;

	//方法2：
	int m = obstacleGrid.size();
	int n = obstacleGrid[0].size();
	vector<vector<int>> path_num(m,vector<int>(n));
	if(obstacleGrid[0][0] == 1 )
		return 0;
	else
	{
		path_num[0][0] = 1;
	}
	for (int i = 1 ;i< m ;i++)
	{
		if(obstacleGrid[i][0] != 1)
			path_num[i][0] = path_num[i-1][0];
	}
	for (int i = 1 ;i< n ;i++)
	{
		if(obstacleGrid[0][i] != 1)
			path_num[0][i] = path_num[0][i-1];
	}
	for (int i = 1;i< m;i++)
	{
		for (int j = 1;j<n;j++)
		{
			if (obstacleGrid[i][j] != 1)
			{
				path_num[i][j] = path_num[i-1][j] + path_num[i][j-1];
			}
			else
			{
				 path_num[i][j] = 0;
			}
			
		}
	}
	return path_num[m-1][n-1];
}