#include<iostream>
#include <queue>
#include <string>
#include <math.h>
using namespace std;

struct ListNode {
	     int val;
	     ListNode *next;
	     ListNode(int x) : val(x), next(NULL) {}
};

class Solution43 {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) ;
};