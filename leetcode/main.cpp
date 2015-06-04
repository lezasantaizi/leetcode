#include<iostream>

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
#include"convert.h"
#include"reverseList.h"
#include"myAtoi.h"
using namespace std;


int myAtoi(char* str) {

	int iter = 0;
	while (str[iter] != '\0')
	{
		iter++;
	}
	int strLen = iter;
	int num = 0;
	int flag = 0;
	int index = 0;

	while (index < strLen && str[index] == ' ')
	{
		index++;
	}
	if (index >= strLen)
		return 0;
	if (str[index] == '-')
	{
		flag = 1;
		index += 1;
	}
	else if (str[index] == '+')
	{
		index += 1;
	}

	for (int i = index; i < strLen; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (num > 214748364 || (num == 214748364 && flag == 0 && (str[i] - '0') > 7) || (num == 214748364 && flag == 1 && (str[i] - '0') > 8))
			{
				if (flag == 1)
					return -2147483648;
				else
					return 2147483647;
			}
			num = num * 10 + str[i] - '0';
		}
		else
			break;
	}
	if (flag == 1)
	{
		num *= -1;
	}
	return num;
}


int main()
{
	Solution23 solution;
	//vector<int> temp = { 9, 9, 9 };
	ListNode node1(1);
	ListNode node2(2);
	node1.next = &node2;
	node2.next = NULL;
	int temp = myAtoi("  -0012a42");
	//int temp = solution.myAtoi(" + 2 2 1");		   
	//ListNode* result = solution.reverseList(&node1);
	//int temp[1] = { 0 };
	//string result = solution.convert("PAYPALISHIRING", 3);
	//ListNode* result = removeNthFromEnd(&node1,1);
	return 0;
}


