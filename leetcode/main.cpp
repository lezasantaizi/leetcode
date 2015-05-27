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
#include"isSymmetric.h"
#include"getIntersectionNode.h"
using namespace std;


int main()
{
	Solution16 solution;
	vector<int> temp = { 1, 3, 1 };
	//int result;
	//result = solution.compareVersion("1.0","1");
	//result =  solution.isIsomorphic("ab", "aa");
	//result = isIsomorphic("ab", "aa");
	//cout << result;
	//char* temp2 = convertToTitle(28);

	ListNode node1(11);
	ListNode node2(12);
	ListNode node3(31);
	ListNode node4(32);
	ListNode node5(33);
	ListNode node6(21);
	ListNode node7(22);
	ListNode node8(23);

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = NULL;
	node6.next = &node7;
	node7.next = &node8;
	node8.next = &node3;


	ListNode *head1 = &node1;
	ListNode *head2 = &node6;
	//ListNode *result = solution.getIntersectionNode(head1, head2);
	ListNode *result = NULL;
	result = solution.getIntersectionNode(head1, head2);
	return 0;
}


