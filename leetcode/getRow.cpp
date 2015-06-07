#include "getRow.h"

vector<int> Solution32::getRow(int rowIndex)
{
	if (rowIndex <0)
	{
		return vector<int>();
	}
	vector<int> row(rowIndex+1,1);
	for (int iter = 1 ;iter< rowIndex ;iter++)
	{
		int last = 1; 
		int cur = 1;
		for (int i = 1; i< iter+1; i++)
		{
			cur = row[i];
			row[i] += last;
			last = cur;
			
		}
	}
	return row;
}