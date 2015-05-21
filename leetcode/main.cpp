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
#include"convertToTitle.h"
using namespace std;

char* convertToTitle(int n) {
	char* result = (char*)malloc(8);
	int i = 0;
	while (n)
	{
		result[i++] = ((n - 1) % 26 + 'A');
		n = n / 26;
	}
	result[i] = '\0';
	return result;
}
int main()
{
	Solution10 solution;
	vector<int> temp = { 1, 3, 1 };
	string result;
	result = solution.convertToTitle(28);
	//cout << result;
	//char* temp2 = convertToTitle(28);
	return 0;
}


