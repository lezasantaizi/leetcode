#include "minimumTotal.h"
int Solution107::minimumTotal(vector<vector<int>>& triangle) 
{
	//方法1：
	//int m = triangle.size();
	//int n = triangle[m-1].size();
	//vector<vector<int>> path_sum(m,vector<int>(n,INT_MAX));
	//path_sum[0][0] = triangle[0][0];
	//for (int i = 1;i< m;i++)
	//{
	//	for (int j = 0;j < triangle[i].size();j++)
	//	{
	//		int min_of_three = 0;
	//		//if(j == 0)
	//		//	min_of_three = min(path_sum[i-1][j],path_sum[i-1][j+1]);
	//		//else if (j == triangle[i].size()-1)
	//		//	min_of_three = min(path_sum[i-1][j-1],path_sum[i-1][j]);
	//		//else
	//		//	min_of_three = min(min(path_sum[i-1][j-1],path_sum[i-1][j]),path_sum[i-1][j+1]);


	//		if (j == 0)
	//			min_of_three = path_sum[i-1][j];
	//		else
	//			min_of_three = min(path_sum[i-1][j-1],path_sum[i-1][j]);
	//		path_sum[i][j] = min_of_three + triangle[i][j];
	//	}
	//}
	//int result = INT_MAX;
	//for (int i = 0;i< n;i++)
	//{
	//	if(result > path_sum[m-1][i])
	//		result = path_sum[m-1][i];
	//}
	//return result;

	////方法2：
	//int m = triangle.size();
	//int n = triangle[m-1].size();
	//vector<int> path_sum(n,INT_MAX);
	//path_sum[0] = triangle[0][0];
	//for (int i = 1;i< m;i++)
	//{
	//	for (int j = triangle[i].size() -1 ;j >= 0 ;j--)
	//	{
	//		int min_of_three = 0;
	//		if (j == 0)
	//			min_of_three = path_sum[j];
	//		else
	//			min_of_three = min(path_sum[j-1],path_sum[j]);
	//		path_sum[j] = min_of_three + triangle[i][j];
	//	}
	//}
	//int result = INT_MAX;
	//for (int i = 0;i< n;i++)
	//{
	//	if(result > path_sum[i])
	//		result = path_sum[i];
	//}
	//return result;


	//方法3：
	int m = triangle.size();
	vector<int> path_sum(triangle[m-1]);
	for (int i = m-2;i >= 0;i--)
	{
		for (int j = 0 ;j < triangle[i].size() ;j++)
		{
			path_sum[j] = triangle[i][j] + min(path_sum[j],path_sum[j+1]);
		}
	}
	return path_sum[0];
}