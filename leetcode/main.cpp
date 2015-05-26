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
#include"titleToNumber.h"
#include"majorityElement.h"
#include"compareVersion.h"
#include"isIsomorphic.h"
using namespace std;

bool isIsomorphic(char* s, char* t) {
	//int sLen = s.size();
	char charArrS[256] = { 0 };
	char charArrT[256] = { 0 };
	//for (int i = 0; i < sLen; i++)
	int i = 0;
	while (s[i] !=0)
	{
		if (charArrS[s[i]] == 0 && charArrT[t[i]] == 0)
		{
			charArrS[s[i]] = t[i];
			charArrT[t[i]] = s[i];
		}
		else
		if (charArrS[s[i]] != t[i] || charArrT[t[i]] != s[i])
			return false;
		i++;
	}

	return true;
}


int main()
{
	Solution14 solution;
	vector<int> temp = { 1, 3, 1 };
	int result;
	//result = solution.compareVersion("1.0","1");
	//result =  solution.isIsomorphic("ab", "aa");
	result = isIsomorphic("ab", "aa");
	//cout << result;
	//char* temp2 = convertToTitle(28);
	return 0;
}


