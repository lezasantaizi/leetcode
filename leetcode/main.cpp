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
#include "isPalindrome.h"
#include"containsNearbyDuplicate.h"
#include "isValid.h"
#include "generate.h"
#include "getRow.h"
#include "removeElement.h"
using namespace std;



bool func(char* s)
{
	int sLen = 0;
	while (s[sLen] !='\0')
	{
		sLen++;
	}

	int j = sLen - 1;
	for (int i = 0 ;i< sLen; i++)
	{
		if(i>=j)
			break;
		if((s[i] <= 'Z'&& s[i] >= 'A') ||(s[i] <='z' && s[i]>= 'a') || (s[i] <='9' && s[i]>= '0'))
		{		
			while(!((s[j]<= 'Z'&& s[j] >= 'A')||
				(s[j] <='z' && s[j]>= 'a')||(s[j] <='9' && s[j]>= '0')))

			{
				j--;
			}
			if(i>=j)
				break;
			if((s[i]>'9' && s[j] > '9' &&(abs(s[i] - s[j]) == 32))|| (s[i] == s[j]))
			{
				j--;
				continue;
			}
			else
			{
				return false;
			}

		}

	}
	return true;
}
int main()
{
	Solution33 solution;
	vector<int> temp;
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(3);
	int result = solution.removeElement(temp,1);
	//vector<vector<int>> result = solution.generate(5);
	//vector<int> result = solution.getRow(4);
	//bool result = solution.containsNearbyDuplicate(temp,2);
	//bool result = solution.isValid("{[()]()}");
	//vector<int> temp = { 9, 9, 9 };
	//ListNode node1(1);
	//ListNode node2(1);
	//ListNode node3(2);
	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = NULL;
	//ListNode* result = solution.deleteDuplicates(&node1);
	//bool result = solution.isPalindrome("race a car");
	//bool result = func("A man, a plan, a canal: Panama");
	//TreeNode node1(1);
	//TreeNode node2(2);
	//TreeNode node3(3);
	//node1.left = NULL;
	//node1.right = &node2;
	//node2.left = NULL;
	//node2.right = &node3;
	//node3.left = NULL;
	//node3.right = NULL;
	//solution.isBalanced(&node1);
	//int temp = myAtoi("  -0012a42");
	//string str = solution.addBinary("11","1110");
	//char* temp = addBinary("11", "1");
	//int result = climbStairs(4);
	//int temp = solution.myAtoi(" + 2 2 1");		   
	//ListNode* result = solution.reverseList(&node1);
	//int temp[1] = { 0 };
	//string result = solution.convert("PAYPALISHIRING", 3);
	//ListNode* result = removeNthFromEnd(&node1,1);
	return 0;
}


