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
#include"addBinary.h"
using namespace std;

char* addBinary(char* a, char* b)
{

	int aLen = 0;
	int bLen = 0;
	while (a[aLen++]);
	while (b[bLen++]);
	aLen = aLen - 1;
	bLen = bLen - 1;
	int bigLen = aLen < bLen ? bLen : aLen;
	int carry = 0;
	char* result = (char*)malloc(bigLen + 2);

	result[bigLen+1] = 0;
	
	//string result = "";
	for (int i = 0; i < bigLen; i++)
	{
		int aStr = aLen > 0 ? a[aLen - 1] - '0' : 0;
		int bStr = bLen > 0 ? b[bLen - 1] - '0' : 0;
		int bitData = aStr + bStr + carry;
		if (bitData >= 2)
		{
			carry = 1;
			result[bigLen - i] = '0' + bitData - 2;
		}
		else
		{
			carry = 0;
			result[bigLen - i] = '0' + bitData;
		}
		aLen--;
		bLen--;
	}
	if (carry)
	{
		result[0] = '1';
		return result ;
	}
	return result + 1;
}

int main()
{
	Solution24 solution;
	//vector<int> temp = { 9, 9, 9 };
	ListNode node1(1);
	ListNode node2(2);
	node1.next = &node2;
	node2.next = NULL;
	//int temp = myAtoi("  -0012a42");
	//string str = solution.addBinary("11","1110");
	char* temp = addBinary("11", "1");
	//int temp = solution.myAtoi(" + 2 2 1");		   
	//ListNode* result = solution.reverseList(&node1);
	//int temp[1] = { 0 };
	//string result = solution.convert("PAYPALISHIRING", 3);
	//ListNode* result = removeNthFromEnd(&node1,1);
	return 0;
}


