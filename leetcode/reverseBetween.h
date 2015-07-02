
#include<vector>
#include <iostream>
#include <string>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
 };

class Solution62 {
public:
 ListNode* reverseBetween(ListNode* head, int m, int n) ;
};