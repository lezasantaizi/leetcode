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
#include "isPalindrome2.h"
#include "searchInsert.h"
#include "lengthOfLongestSubstring.h"
#include "isNumber.h"
#include "combinationSum3.h"
#include "combine.h"
#include "calculate.h"
#include "largestNumber.h"
using namespace std;

char* largestNumber(int* nums, int numsSize) {
	char* result = (char*)malloc(numsSize* 20);
	memset(result,0,numsSize*20);
	char num2Char1[20];
	char num2Char2[20];
	for (int i = 0 ;i< numsSize;++i)
	{
		for (int j = i+1; j < numsSize; j++)
		{
			//itoa(nums[i],num2Char1,10);
			//itoa(nums[j],num2Char2,10);
			sprintf(num2Char1,"%d",nums[i]);
			sprintf(num2Char2,"%d",nums[j]);
			int iter1 = 0;
			int iter2 = 0;
			while(1)
			{
				if(num2Char1[iter1] > num2Char2[iter2])
				{
					break;
				}
				else if(num2Char1[iter1] < num2Char2[iter2])
				{
					int temp = nums[i];
					nums[i] = nums[j];
					nums[j] = temp;
					break;
				}
				++iter1;
				++iter2;

				// 898£¬89 ; 898 898 < 89 89 89 ,so 89 898 > 898 89
				if(num2Char1[iter1] == '\0'&& num2Char2[iter2] != '\0')
					iter1 = 0;
				else if (num2Char1[iter1] != '\0' && num2Char2[iter2] == '\0')
					iter2 = 0;
				else if(num2Char1[iter1] == '\0'&& num2Char2[iter2] == '\0')
					break;
			}
		}
		if(nums[0] == 0)
		{
			return "0"; 
		}
		//itoa(nums[i],num2Char1,10);
		sprintf(num2Char1,"%d",nums[i]);
		strcat(result,num2Char1);
	}
	return result;    
}


int main()
{
	Solution60 solution;
	
	int nums[3]= {898,89,7};
	char* result2 = largestNumber(nums, 3) ;

	//int result = solution.calculate("(1+2)+3");//("1 - (1+2+(3 - 2))") ;
	//vector<vector<int>> result = solution.combine(1,1);
	//vector<vector<int>> result = solution.combinationSum3(3,9);
	//bool result = solution.isNumber("-2e");
	//bool result = solution.isPalindrome(121343121);
	vector<int> num;
	num.push_back(3);
	num.push_back(89);
	num.push_back(898);
	num.push_back(5);
	num.push_back(1);
	string result = solution.largestNumber(num);
	//int result = solution.lengthOfLongestSubstring("dvdf");
	//int result = solution.searchInsert(num,-10);
	num.push_back(1);
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
	num.push_back(-1);
	num.push_back(0);
	num.push_back(1);
	num.push_back(2);
	num.push_back(-1);
	num.push_back(4);



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
	//ListNode node2(4);
	//ListNode node3(3);
	//ListNode node4(2);
	//ListNode node5(5);
	//ListNode node6(2);

	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = &node4;
	//node4.next = &node5;
	//node5.next = &node6;
	//node6.next = NULL;
	//int result = solution.longestConsecutive(temp);
	//vector<int> result = solution.spiralOrder(matrix);
	//ListNode* result = solution.partition(&node1,3);
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


