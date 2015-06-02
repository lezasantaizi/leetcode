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
using namespace std;


int main()
{
	Solution22 solution;
	//vector<int> temp = { 9, 9, 9 };
	ListNode node1(1);
	ListNode node2(2);
	node1.next = &node2;
	node2.next = NULL;
	ListNode* result = solution.reverseList(&node1);
	//int temp[1] = { 0 };
	//string result = solution.convert("PAYPALISHIRING", 3);
	//ListNode* result = removeNthFromEnd(&node1,1);
	return 0;
}


