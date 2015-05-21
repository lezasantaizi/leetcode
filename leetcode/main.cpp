#include<iostream>

#include "countPrimes.h"
#include "isHappy.h"
#include "hammingWeight.h"
#include "rob.h"
#include"reverse.h"
#include"reverseBits.h"
#include"rotate.h"
#include"permuteUnique.h"
#include"trailingZeroes.h"
using namespace std;


int main()
{
	Solution9 solution;
	vector<int> temp = { 1, 3, 1 };
	int result;
	result = solution.trailingZeroes(10);
	cout << result;
	return 0;
}


