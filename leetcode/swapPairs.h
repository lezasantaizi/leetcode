#include<iostream>
#include<stack>
#include<vector>
#include <deque>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution92 {
public:
	ListNode* swapPairs(ListNode* head);
};