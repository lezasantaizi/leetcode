#include "spiralOrder.h"

vector<int> Solution45::spiralOrder(vector<vector<int>>& matrix) 
{
	vector<int> result ;
	int row = matrix.size();
	if(row == 0)
		return result;
	int col = matrix[0].size();
	for (int i = 0;i< min((row+1)/2,(col+1)/2);i++)
	{
		for (int j = i;j<col-i;j++)//˳��
			result.push_back(matrix[i][j]);
		for(int j = i+1 ;j< row-i; j++)//˳��
			result.push_back(matrix[j][col - i-1]);
		if(row - 2*i > 1)
		for (int j = col-i-1-1;j>= i ;j--)//����
			result.push_back(matrix[row-i-1][j]);
		if(col -2*i > 1)
		for(int j = row - 1-i-1 ;j>= i+1;j--)
			result.push_back(matrix[j][i]);
	}
	return result;
}