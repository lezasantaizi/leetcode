#include "uniquePaths.h"

int func(int m, int n, vector<vector<int>>& path_num)
{
	if(m <= 0 || n <= 0)
	{
		return 0;
	}
	if (m ==1 || n == 1)
	{
		return 1;
	}
	
	if (path_num[m-1][n-1] != 0)
	{
		return path_num[m-1][n-1];
	}
	int result =  func(m-1,n,path_num)+ func(m,n-1,path_num);
	path_num[m-1][n-1] = result;
	return result;
}

int Solution104::uniquePaths(int m, int n) 
{
	vector<vector<int>> path_num(m,vector<int>(n));
	int result = func(m,n,path_num);
	return result;
}