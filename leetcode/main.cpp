//#include "countPrimes.h"
//#include "isHappy.h"
//#include "hammingWeight.h"
//#include "rob.h"
//#include"reverse.h"
//#include"reverseBits.h"
//#include"rotate.h"
//#include"permuteUnique.h"
//#include"trailingZeroes.h"
//#include"convertToTitle.h"
//#include"titleToNumber.h"
//#include"majorityElement.h"
//#include"compareVersion.h"
//#include"isIsomorphic.h"
//#include"isSymmetric.h"
//#include"getIntersectionNode.h"
//#include"plusOne.h"
//#include"lengthOfLastWord.h"
//#include"removeNthFromEnd.h"
//#include"removeElements.h"
//#include"convert.h"
//#include"reverseList.h"
//#include"myAtoi.h"
//#include"addBinary.h"
//#include"climbStairs.h"
//#include"deleteDuplicates.h"
//#include"isBalanced.h"
#include "isPalindrome.h"
#include"containsNearbyDuplicate.h"
#include "isValid.h"
#include "generate.h"
#include "getRow.h"
#include "removeElement.h"
#include "romanToInt.h"
#include"merge.h"
using namespace std;

//int toNumber(char ch) {  
//	switch (ch) {  
//	case 'I': return 1;  
//	case 'V': return 5;  
//	case 'X': return 10;  
//	case 'L': return 50;  
//	case 'C': return 100;  
//	case 'D': return 500;  
//	case 'M': return 1000;  
//	}  
//	return 0;  
//} 

int romanToInt(char* s) 
{
	int NUM[256] = { 0 };
	NUM['I'] = 1;
	NUM['V'] = 5;
	NUM['X'] = 10;
	NUM['L'] = 50;
	NUM['C'] = 100;
	NUM['D'] = 500;
	NUM['M'] = 1000;
	int i = 0;
	int sum = NUM[s[0]];
	while(s[++i])
	{
		if(NUM[s[i-1]] < NUM[s[i]])
		{
			sum+= NUM[s[i]] - 2*NUM[s[i-1]];
		}
		else
		{
			sum+= NUM[s[i]];
		}
	}
	return sum;   
}

bool func(char* s)
{
	int sLen = 0;
	while (s[sLen] !='\0')
	{
		sLen++;
	}

	int j = sLen - 1;
	for (int i = 0 ;i< sLen; i++)
	{
		if(i>=j)
			break;
		if((s[i] <= 'Z'&& s[i] >= 'A') ||(s[i] <='z' && s[i]>= 'a') || (s[i] <='9' && s[i]>= '0'))
		{		
			while(!((s[j]<= 'Z'&& s[j] >= 'A')||
				(s[j] <='z' && s[j]>= 'a')||(s[j] <='9' && s[j]>= '0')))

			{
				j--;
			}
			if(i>=j)
				break;
			if((s[i]>'9' && s[j] > '9' &&(abs(s[i] - s[j]) == 32))|| (s[i] == s[j]))
			{
				j--;
				continue;
			}
			else
			{
				return false;
			}

		}

	}
	return true;
}
int main()
{
	Solution35 solution;
	vector<int> temp;
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);
	int result = romanToInt("DCXXI");

	vector<int> temp1(10, 1);
	vector<int> temp2(3, 2);
	solution.merge(temp1,3,temp2,2);


	return 0;
}


