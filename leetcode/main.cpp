#include<iostream>

#include "countPrimes.h"
#include "isHappy.h"
#include "hammingWeight.h"
#include "rob.h"
#include"reverse.h"
#include"reverseBits.h"
#include"rotate.h"
#include"permuteUnique.h"
using namespace std;


int main()
{
	Solution8 solution;
	vector<int> temp = { 1, 3, 1 };
	vector<vector<int>> result;
	result = solution.permuteUnique(temp);
	//cout << temp ;
	return 0;
}


