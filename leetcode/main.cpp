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
//#include "longestConsecutive.h"
//#include "spiralOrder.h"
//#include "Queues2stack.h"
//#include "partition.h"
//#include "rangeBitwiseAnd.h"
//#include"twoSum.h"
//#include"threeSum.h"
//#include"fourSum.h"
//#include "isPalindrome2.h"
//#include "searchInsert.h"
//#include "lengthOfLongestSubstring.h"
//#include "isNumber.h"
//#include "combinationSum3.h"
//#include "combine.h"
//#include "calculate.h"
//#include "largestNumber.h"
//#include "findKthLargest.h"
//#include "reverseBetween.h"
//#include "kthSmallest.h"
//#include "recoverTree.h"
//#include "sortedListToBST.h"
//#include "sortedArrayToBST.h"
//#include "inorderTraversal.h"
//#include "numTrees.h"
//#include "rightSideView.h"
//#include "levelOrderBottom.h"
//#include "preorderTraversal.h"
//#include "pathSum.h"
//#include "connect.h"
//#include "isValidBST.h"
//#include "flatten.h"
//#include"postorderTraversal.h"
//#include "zigzagLevelOrder.h"
//#include "countNodes.h"
//#include "BSTIterator.h"
//#include "buildTree.h"
//#include "sumNumbers.h"
//#include "buildTree2.h"
//#include "lowestCommonAncestor.h"
//#include "lowestCommonAncestor2.h"
//#include "connect2.h"
//#include "maxPathSum.h"
//#include "generateTrees.h"
#include "search.h"
using namespace std;


//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//
//void func(struct TreeNode* result ,int* preorder, int preorderSize, int* inorder, int inorderSize)
//{
//	if(preorderSize == 0)
//		return ;
//	result->val = preorder[0];
//	int* leftorder_pre = NULL;
//	int* leftorder_in = NULL;
//	int leftorder_size = 0;
//	int* rightorder_pre = NULL;
//	int* rightorder_in = NULL;
//	int rightoder_size = 0;
//	int i = 0;
//	for ( i = 0; i< preorderSize;i++)
//	{
//		if(inorder[i] == preorder[0])
//			break;
//	}
//	leftorder_size = i;
//	if(leftorder_size == 0)
//	{
//		leftorder_in = NULL;
//		leftorder_pre = NULL;
//	}
//	else
//	{
//		leftorder_in = inorder;
//		leftorder_pre = &preorder[1];
//	}
//	rightoder_size = preorderSize - 1 - i;
//	if(rightoder_size == 0)
//	{
//		rightorder_in = NULL;
//		rightorder_pre = NULL;
//	}
//	else
//	{
//		rightorder_in = &inorder[i+1];
//		rightorder_pre = &preorder[i+1];
//	}
//
//	struct TreeNode* node_left = (struct TreeNode*)malloc(sizeof(TreeNode*));
//	node_left->left = NULL;
//	node_left->right = NULL;
//	struct TreeNode* node_right = (struct TreeNode*)malloc(sizeof(TreeNode*));
//	node_right->left = NULL;
//	node_right->right = NULL;
//	if(leftorder_size != 0)
//	{
//		result->left = node_left;
//		func(node_left,leftorder_pre,leftorder_size,leftorder_in,leftorder_size);
//	}
//	if (rightoder_size != 0)
//	{
//		result->right = node_right;
//		func(node_right,rightorder_pre,rightoder_size,rightorder_in,rightoder_size);
//	}
//}
//
//struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) 
//{
//	struct TreeNode* result = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//	func(result,preorder,preorderSize,inorder,inorderSize);
//	return result;
//}

int main()
{
	Solution88 solution;

	//int result = solution.numTrees(5);
	//int nums1[5]= {3,9,15,7,20};
	//int nums2[5]= {15,9,7,3,20};
	//struct TreeNode* result = buildTree(nums1,5,nums2,5);
	//char* result2 = largestNumber(nums, 3) ;
	
	//int result = solution.calculate("(1+2)+3");//("1 - (1+2+(3 - 2))") ;
	//vector<vector<int>> result = solution.combine(1,1);
	//vector<vector<int>> result = solution.combinationSum3(3,9);
	//bool result = solution.isNumber("-2e");
	//bool result = solution.isPalindrome(121343121);
	vector<int> num1;
	num1.push_back(2);
	num1.push_back(3);
	num1.push_back(4);
	num1.push_back(0);
	num1.push_back(1);
	int result = solution.search(num1,2);

	vector<int> num2;
	num2.push_back(15);
	num2.push_back(7);
	num2.push_back(9);
	num2.push_back(20);
	num2.push_back(3);
	//TreeNode* result = solution.buildTree(num1,num2);
	//TreeNode* result = solution.sortedArrayToBST(num);
	
	//int result = solution.findKthLargest(num,2);
	//string result = solution.largestNumber(num);
	//int result = solution.lengthOfLongestSubstring("dvdf");
	//int result = solution.searchInsert(num,-10);
	//num.push_back(1);
	//num.push_back(2);
	//num.push_back(2);
	//num.push_back(2);
	//num.push_back(3);
	//num.push_back(3);
	//num.push_back(4);
	//num.push_back(4);
	//num.push_back(6);
	//num.push_back(6);

	//{-1 0 1 2 -1 -4},
	//num.push_back(-1);
	//num.push_back(0);
	//num.push_back(1);
	//num.push_back(2);
	//num.push_back(-1);
	//num.push_back(4);



	//[-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6]
	//num.push_back(-4);
	//vector<vector<int>> result = solution.fourSum(num, 2);
	//vector<vector<int>> result = solution.threeSum(num);
	//vector<int> result = solution.twoSum(num,6);	   
	//int result = solution.rangeBitwiseAnd(5,9);
	vector<int> temp;
	temp.push_back(1);
	temp.push_back(5);
	temp.push_back(3);
	temp.push_back(0);

	vector<vector<int>> matrix;
	for (int i = 0 ;i<3;i++)
	{
		vector<int> temp;
		for (int j = 0;j<3;j++)
		{
			temp.push_back(i*3+j+1);
		}
		matrix.push_back(temp);
	}

	//ListNode node1(1);
	//ListNode node2(2);
	//ListNode node3(3);
	//ListNode node4(4);
	//ListNode node5(5);
	//ListNode node6(6);

	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = &node4;
	//node4.next = &node5;
	//node5.next = &node6;
	//node6.next = NULL;
	//TreeNode* result = solution.sortedListToBST(&node1);
	//ListNode* result = solution.reverseBetween(&node1,1,4);
	//int result = solution.longestConsecutive(temp);
	//vector<int> result = solution.spiralOrder(matrix);
	//ListNode* result = solution.partition(&node1,3);
	//int result = romanToInt("DCXXI");

	//vector<int> temp1(10, 1);
	//vector<int> temp2(3, 2);
	//solution.merge(temp1,3,temp2,2);

	TreeNode temp1(2);
	TreeNode temp2(-1);
	TreeNode temp3(1);
	TreeNode temp4(5);
	TreeNode temp5(7);
	TreeNode temp6(8);
	TreeNode temp7(13);
	TreeNode temp8(4);
	TreeNode temp9(5);
	TreeNode temp10(1);


	temp1.left = &temp2;
	temp1.right = NULL;
	
	temp3.left = NULL;
	temp3.right = NULL;
	//temp2.left = &temp4;
	//temp2.right = &temp5;

	//TreeNode* result = solution.lowestCommonAncestor(&temp1,&temp2,&temp4);
	//solution.flatten(&temp1);
	//vector<vector<int>> result = solution.pathSum(&temp1,22);
	//vector<int> result = solution.postorderTraversal(&temp1);
	temp4.left = NULL;
	temp4.right = NULL;
	temp5.left = NULL;
	temp5.right = NULL;
	temp6.left = &temp7;
	temp6.right = &temp8;
	temp7.left = NULL;
	temp7.right = NULL;
	temp8.left = &temp9;
	temp8.right = &temp10;
	temp9.left = NULL;
	temp9.right = NULL;
	temp10.left = NULL;
	temp10.right = NULL;
	//int result = solution.maxPathSum(&temp1);
	//vector<TreeNode*> result = solution.generateTrees(3);
	//int result = solution.sumNumbers(&temp1);
	//BSTIterator79 i = BSTIterator79(&temp1);
	//while (i.hasNext()) cout << i.next()<<endl;
	//bool result = solution.isValidBST(&temp1);
	//vector<vector<int>> result = solution.zigzagLevelOrder(&temp1);
	//int result = solution.countNodes(&temp1);
	//vector<vector<int>> result = solution.pathSum(&temp1,22);
	//vector<int> result = solution.preorderTraversal(&temp1);
	//vector<vector<int>> result = solution.levelOrderBottom(&temp1);
	//vector<int> result = solution.rightSideView(&temp1);
	//vector<int> result = solution.inorderTraversal(&temp1);
	//temp6.left = NULL;
	//temp6.right = NULL;

	//int result = solution.kthSmallest(&temp1,4);
	//solution.recoverTree(&temp1);
	

	//struct ListNode node1(1);
	//struct ListNode node2(7);
	//struct ListNode node3(3);

	//ListNode* result = solution.addTwoNumbers(&node1,&node2);

	//int result = solution.minDepth(&temp1);
	//int result = solution.maxDepth(&temp1);
	//bool result = solution.hasPathSum(&temp1,1);
	//vector<vector<int>> result = solution.levelOrder(&temp1);
	//TreeNode* result = solution.invertTree(&temp1);

	//bool result = solution.isSameTree(&temp1,&temp4);
	//int result = solution.computeArea(-1,-1,0,0,2,2,3,3);

	//TreeLinkNode node1(1);
	//TreeLinkNode node2(2);
	//TreeLinkNode node3(3);
	//TreeLinkNode node4(4);
	//TreeLinkNode node5(5);

	//node1.left = &node2;
	//node1.right = &node3;
	//node2.left = &node4;
	//node2.right = &node5;
	//node3.left = NULL;
	//node3.right = NULL;
	//node4.left = NULL;
	//node4.right = NULL;
	//node5.left = NULL;
	//node5.right = NULL;

	//solution.connect(&node1);

	return 0;
}


