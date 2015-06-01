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


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode* head1,*head2;
	head1 = head;
	head2 = head;
	for(int i = 0;i < n; i++)
	{
		head1 = head1->next;
	}
	if (head1 == NULL)
	{
		return head->next;
	}
	while (head1->next)
	{
		head1 = head1->next;
		head2 = head2->next;
	}
	head2->next = head2->next->next;
	return head;

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
	  //node1 -> node2->node3->node4->node5
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = NULL;

	ListNode* result = removeNthFromEnd(&node1,1);
	return 0;
}


