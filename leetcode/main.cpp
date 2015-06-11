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
#include "maxDepth.h"
using namespace std;


int main()
{
	Solution39 solution;
	vector<int> temp;
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);
	//int result = romanToInt("DCXXI");

	//vector<int> temp1(10, 1);
	//vector<int> temp2(3, 2);
	//solution.merge(temp1,3,temp2,2);

	TreeNode temp1(1);
	TreeNode temp2(2);
	TreeNode temp3(3);
	TreeNode temp4(1);
	TreeNode temp5(2);
	TreeNode temp6(3);

	temp1.left = &temp2;
	temp1.right = NULL;
	temp2.right = &temp3;
	temp2.left = NULL;
	temp3.left = NULL;
	temp3.right = NULL;
	temp4.left = &temp5;
	temp5.left = NULL;
	temp5.right = NULL;
	temp4.right = &temp6;
	temp6.left = NULL;
	temp6.right = NULL;

	//int result = solution.minDepth(&temp1);
	int result = solution.maxDepth(&temp1);
	//bool result = solution.isSameTree(&temp1,&temp4);
	//int result = solution.computeArea(-1,-1,0,0,2,2,3,3);


	return 0;
}


