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
#include"removeNthFromEnd.h"
using namespace std;


//int* plusOne(int* digits, int digitsSize, int* returnSize) {
//	int* temp = (int*)malloc(sizeof(int)*(digitsSize + 1));
//	memcpy(temp, digits, sizeof(int)*digitsSize);
//	int n = digitsSize;
//	while (n)
//	{
//		if (digits[n - 1] < 9)
//		{
//			temp[n-1] = digits[n - 1] + 1;
//			break;
//		}
//		else
//		{
//			temp[n-1] = 0;
//		}
//		n--;
//	}
//	if (n == 0 && temp[0] == 0)
//	{
//		temp[0] = 1;
//		temp[digitsSize] = 0;
//		*returnSize = digitsSize + 1;
//	}
//	else
//	{
//		*returnSize = digitsSize;
//	}
//	
//	return temp;
//}


int lengthOfLastWord(char* s) {
	if (s[0] == '\0')
		return 0;
	int sLen = 0;
	while (s[sLen++] != '\0')
		;
	sLen = sLen - 1;
	int lastWordLen = 0;
	while (sLen >= 1 && s[sLen - 1] == ' ')
		sLen--;
	for (int i = sLen - 1; i >= 0; i--)
	{
		if (s[i] != ' ')
		{
			lastWordLen++;
		}
		else
			break;

	}
	return lastWordLen;
}
int main()
{
	Solution19 solution;
	//vector<int> temp = { 9, 9, 9 };
	int temp[1] = { 0 };
	//int returnSize = 0;
	//int* temp2= plusOne(temp, 1, &returnSize);
	//int result = solution.lengthOfLastWord("  ");
	//int result = lengthOfLastWord(" ");
	//vector<int> result = solution.plusOne(temp);
	//int result;
	//result = solution.compareVersion("1.0","1");



	//result = solution.isSymmetric(&node1);
	ListNode node1(11);
	ListNode node2(12);
	ListNode node3(31);
	ListNode node4(32);
	ListNode node5(33);
	ListNode node6(21);
	ListNode node7(22);
	ListNode node8(23);
	  //node
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = NULL;

	solution.removeNthFromEnd(&node1,2);
	return 0;
}


