#include "generate.h"

vector<vector<int>> Solution31::generate(int numRows) 
{
	//vector<vector<int>> temp;
	//if (numRows <=0)
	//{
	//	return temp;
	//}
	//vector<int> first(1,1);
	//temp.push_back(first);
	//for (int i = 1 ;i< numRows; i++)
	//{
	//	vector<int> row;
	//	row.push_back(1);
	//	for (int j = 0 ;j<i-1;j++)
	//	{
	//		vector<int> last = temp.back();
	//		row.push_back(last[j]+ last[j+1]);
	//	}
	//	row.push_back(1);
	//	temp.push_back(row);
	//}
	//return temp;



	vector<vector<int>> temp;
	if (numRows <=0)
	{
		return temp;
	}
	for (int i = 0;i<numRows; i++)
	{
		vector<int> row(i+1,1);
		for (int j = 0 ;j<i-1;j++)
		{
			row[j+1] = temp[i-1][j]+temp[i-1][j+1];
		}
		temp.push_back(row);
	}
	return temp;
}