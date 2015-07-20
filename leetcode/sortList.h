#include<iostream>
#include<stack>
#include<vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution89 {
public:
	ListNode* sortList(ListNode* head) ;
};