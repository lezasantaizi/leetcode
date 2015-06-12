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
//#include "isPalindrome.h"
//#include"containsNearbyDuplicate.h"
//#include "isValid.h"
//#include "generate.h"
//#include "getRow.h"
//#include "removeElement.h"
//#include "romanToInt.h"
//#include"merge.h"
//#include"isSameTree.h"
//#include"computeArea.h"
//#include "minDepth.h"
//#include "maxDepth.h"
//#include "hasPathSum.h"
//#include "levelOrder.h"
//#include "invertTree.h"
//#include "addTwoNumbers.h"
#include<iostream>
#include <queue>
#include <string>
#include <math.h>
using namespace std;




struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int carry = 0;
	if (l1 == NULL)
	{
		return l2;
	}
	else if(l2 == NULL)
	{
		return l1;
	}
	struct ListNode* first = l1;
	struct ListNode* second = l2;
	while (1)
	{
		int temp = first->val+ second->val+carry;
		if (temp >= 10)
		{
			carry = 1;
			temp -= 10;
		}
		else
			carry = 0;
		first->val = temp;
		if(first->next == NULL ||second->next ==NULL)
			break;
		first = first->next;
		second = second->next;
	}
	if (first->next == NULL)
	{
		second = second->next;
		while (second)
		{
			struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));//new ListNode(second->val);
			node->val = second->val;
			//ListNode node(second->val);
			int temp = node->val+ carry;
			if (temp >= 10)
			{
				carry = 1;
				temp -= 10;
			}
			else
				carry = 0;
			node->val = temp;
			node->next = NULL;
			first->next = node;
			first = first->next;
			second= second->next;
		}
	}
	else
	{
		while (first->next)
		{
			int temp = first->next->val+ carry;
			if (temp >= 10)
			{
				carry = 1;
				temp -= 10;
			}
			else
				carry = 0;
			first->next->val = temp;
			first = first->next;
		}
	}
	if (carry)
	{

		struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));//new ListNode(carry);
		node->val = carry;
		first->next = node;
	}
	return l1;  
}

int main()
{
	//Solution43 solution;
	vector<int> temp;
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);
	//int result = romanToInt("DCXXI");

	//vector<int> temp1(10, 1);
	//vector<int> temp2(3, 2);
	//solution.merge(temp1,3,temp2,2);

	//TreeNode temp1(1);
	//TreeNode temp2(2);
	//TreeNode temp3(3);
	//TreeNode temp4(1);
	//TreeNode temp5(2);
	//TreeNode temp6(3);

	//temp1.left = &temp2;
	//temp1.right = &temp3;
	//temp2.right = NULL;
	//temp2.left = NULL;
	//temp3.left = NULL;
	//temp3.right = NULL;
	//temp4.left = &temp5;
	//temp5.left = NULL;
	//temp5.right = NULL;
	//temp4.right = &temp6;
	//temp6.left = NULL;
	//temp6.right = NULL;


	//struct ListNode node1(1);
	//struct ListNode node2(7);
	//struct ListNode node3(3);
	struct ListNode *node1 = (struct ListNode *)malloc(sizeof(struct ListNode));//new ListNode(second->val);
	node1->val = 3;
	struct ListNode *node2 = (struct ListNode *)malloc(sizeof(struct ListNode));//new ListNode(second->val);
	node2->val = 9;
	struct ListNode *node3 = (struct ListNode *)malloc(sizeof(struct ListNode));//new ListNode(second->val);
	node3->val = 2;
	node1->next = NULL;
	node2->next = node3;
	node3->next = NULL;
	struct ListNode* result =addTwoNumbers(node1,node2);
	//ListNode* result = solution.addTwoNumbers(&node1,&node2);

	//int result = solution.minDepth(&temp1);
	//int result = solution.maxDepth(&temp1);
	//bool result = solution.hasPathSum(&temp1,1);
	//vector<vector<int>> result = solution.levelOrder(&temp1);
	//TreeNode* result = solution.invertTree(&temp1);

	//bool result = solution.isSameTree(&temp1,&temp4);
	//int result = solution.computeArea(-1,-1,0,0,2,2,3,3);


	return 0;
}


