#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution16 {
public:
	ListNode* getIntersectionNode(ListNode *headA, ListNode *headB);
};