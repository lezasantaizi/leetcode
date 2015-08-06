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
//#include "search.h"
//#include "sortList.h"
//#include "MinStack.h"
//#include "maxSlidingWindow.h"
//#include "swapPairs.h"
//#include "rotateRight.h"
//#include "reverseKGroup.h"
//#include "deleteNode.h"
//#include "copyRandomList.h"
//#include "insertionSortList.h"
//#include "mergeKLists.h"
//#include "hasCycle.h"
//#include "detectCycle.h"
//#include "deleteDuplicates2.h"
//#include "isPalindrome_list.h"
//#include "reorderList.h"
//#include "uniquePaths.h"
//#include "uniquePathsWithObstacles.h"
//#include "minPathSum.h"
//#include "minimumTotal.h"
//#include "maxSubArray.h"
//#include "maxProduct.h"
//#include "maxProfit.h"
//#include "numDecodings.h"
//#include "rob2.h"
//#include "maximalRectangle.h"
#include "longestValidParentheses.h"
using namespace std;

int main()
{
	Solution114 solution;
	int result = solution.longestValidParentheses("()())");
	//solution.push(1);
	//solution.push(1);
	//solution.push(2);
	//int result1 = solution.getMin();
	//solution.pop();
	//solution.pop();
	//int result2 = solution.getMin();
	//solution.pop();
	//solution.pop();
	//solution.top();
	
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

	//int result = solution.uniquePaths(2,2);
	//vector<vector<int>> input(3,vector<int>(3));
	//input[1][1] = 1;
	//int result = solution.numDecodings("12");

	vector<vector<int>> input;
	vector<int> temp;
	temp.push_back(2);
	input.push_back(temp);
	temp.clear();
	temp.push_back(3);
	temp.push_back(4);
	input.push_back(temp);
	temp.clear();
	temp.push_back(6);
	temp.push_back(5);
	temp.push_back(7);
	input.push_back(temp);
	temp.clear();
	temp.push_back(4);
	temp.push_back(1);
	temp.push_back(8);
	temp.push_back(3);
	input.push_back(temp);
	//int result = solution.minimumTotal(input);
	//vector<vector<int>> input2(2,vector<int>(2,1));
	//input2[0][1] = 2;
	//int result = solution.uniquePathsWithObstacles(input);
	//int result = solution.minPathSum(input2);
	//0 0 0 1 0 0 0 
	//0 0 1 1 1 0 0 
	//0 1 1 1 1 1 0
	vector<char> num1;
	vector<vector<char>> input1;
	num1.push_back(0);
	num1.push_back(0);
	num1.push_back(0);
	num1.push_back('1');
	num1.push_back(0);
	num1.push_back(0);
	num1.push_back(0);
	input1.push_back(num1);
	num1.clear();
	num1.push_back(0);
	num1.push_back(0);
	num1.push_back('1');
	num1.push_back('1');
	num1.push_back('1');
	num1.push_back(0);
	num1.push_back(0);
	input1.push_back(num1);
	num1.clear();
	num1.push_back(0);
	num1.push_back('1');
	num1.push_back('1');
	num1.push_back('1');
	num1.push_back('1');
	num1.push_back('1');
	num1.push_back(0);
	input1.push_back(num1);
	//int result = solution.maximalRectangle(input1);
	//num1.push_back(3);
	//int result = solution.rob(num1);
	//int result = solution.maxProfit(num1);
	//num1.push_back(1);
	//num1.push_back(-5);
	//num1.push_back(4);
	//int result = solution.maxProduct(num1);
	//int result = solution.maxSubArray(num1);
	//vector<int> result = solution.maxSlidingWindow(num1,3);
	//int result = solution.search(num1,2);

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

	//RandomListNode node1(1);
	//RandomListNode node2(2);
	//RandomListNode node3(3);
	//RandomListNode node4(4);
	//RandomListNode node5(5);
	////ListNode node6(6);

	//node1.next = &node2;
	//node1.random = &node3;
	//node2.next = &node3;
	//node2.random = &node4;
	//node3.next = &node4;
	//node3.random = &node5;
	//node4.next = &node5;
	//node4.random = &node2;
	//node5.next = NULL;
	//node5.random = &node1;
	//RandomListNode* result = solution.copyRandomList(&node1);

	//[-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6]
	//num.push_back(-4);
	//vector<vector<int>> result = solution.fourSum(num, 2);
	//vector<vector<int>> result = solution.threeSum(num);
	//vector<int> result = solution.twoSum(num,6);	   
	//int result = solution.rangeBitwiseAnd(5,9);
	//vector<int> temp;
	//temp.push_back(1);
	//temp.push_back(5);
	//temp.push_back(3);
	//temp.push_back(0);

	//vector<vector<int>> matrix;
	//for (int i = 0 ;i<3;i++)
	//{
	//	vector<int> temp;
	//	for (int j = 0;j<3;j++)
	//	{
	//		temp.push_back(i*3+j+1);
	//	}
	//	matrix.push_back(temp);
	//}

	//ListNode node1(1);
	//ListNode node2(2);
	//ListNode node3(3);
	//ListNode node4(4);
	//ListNode node5(5);
	////ListNode node6(6);

	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = &node4;
	//node4.next = &node5;
	//node5.next = NULL;
	//solution.reorderList(&node1);
	//bool result = solution.isPalindrome(&node1);
	//ListNode* result = solution.deleteDuplicates(&node1);
	//vector<ListNode*> input;
	//input.push_back(&node1);
	//input.push_back(&node3);
	//ListNode* result = solution.detectCycle(&node1);
	//bool result = solution.hasCycle(&node1);
	//ListNode* result = solution.mergeKLists(input);
	//ListNode* result = solution.insertionSortList(&node1);
	//solution.deleteNode(&node1);
	//ListNode* result = solution.reverseKGroup(&node1,2);
	//node6.next = NULL;
	//ListNode* result = solution.rotateRight(&node1,1);
	//ListNode* result = solution.swapPairs(&node1);
	//ListNode* result = solution.sortList(&node1);
	//TreeNode* result = solution.sortedListToBST(&node1);
	//ListNode* result = solution.reverseBetween(&node1,1,4);
	//int result = solution.longestConsecutive(temp);
	//vector<int> result = solution.spiralOrder(matrix);
	//ListNode* result = solution.partition(&node1,3);
	//int result = romanToInt("DCXXI");
	//vector<int> temp1(10, 1);
	//vector<int> temp2(3, 2);
	//solution.merge(temp1,3,temp2,2);
	//TreeNode temp1(2);
	//TreeNode temp2(1);
	//TreeNode temp3(4);
	//TreeNode temp4(0);
	//TreeNode temp5(3);
	//TreeNode temp6(8);
	//TreeNode temp7(13);
	//TreeNode temp8(4);
	//TreeNode temp9(5);
	//TreeNode temp10(1);
	//temp1.left = &temp2;
	//temp1.right = &temp3;
	//
	//temp3.left = NULL;
	//temp3.right = NULL;
	//
	//temp2.left = &temp4;
	//temp2.right = &temp5;
	//TreeNode* result = solution.lowestCommonAncestor(&temp1,&temp2,&temp4);
	//solution.flatten(&temp1);
	//vector<vector<int>> result = solution.pathSum(&temp1,22);
	//vector<int> result = solution.postorderTraversal(&temp1);
	//temp4.left = NULL;
	//temp4.right = NULL;
	//temp5.left = NULL;
	//temp5.right = NULL;
	////solution.recoverTree(&temp1);
	//temp6.left = &temp7;
	//temp6.right = &temp8;
	//temp7.left = NULL;
	//temp7.right = NULL;
	//temp8.left = &temp9;
	//temp8.right = &temp10;
	//temp9.left = NULL;
	//temp9.right = NULL;
	//temp10.left = NULL;
	//temp10.right = NULL;
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


