#include "reverseBetween.h"

ListNode* reverse(struct ListNode *head,int n,int count,struct ListNode **ans)
{
	if(count==n)  // when nth node is reached store the address of next of nth node in ans 
	{
		*ans=head->next;
		return head;
	}

	// this is simple recursive code to reverse a linked list

	struct ListNode *temp=reverse(head->next,n,count+1,ans);
	head->next->next=head;
	head->next=NULL;
	return temp;
}

 ListNode* Solution62::reverseBetween(ListNode* head, int m, int n) 
 {
	 ListNode* preHead = new ListNode(1);
	 preHead->next = head;
	 ListNode* pre = preHead;

	for (int i = 0;i<m-1;i++)
	{
		pre = pre->next;
	}
	ListNode* cur = pre->next;
	for (int i = 0;i< n-m ;i++)
	{
		ListNode* move = cur->next;
		cur->next = move->next;
		move->next = pre->next;
		pre->next = move;
	}
	return preHead->next;

//·½·¨2£º
	 //if(m==n)
		// return head;

	 //int count=1;
	 //struct ListNode *temp=NULL,*p=head;

	 //while(count<m)  // Reach the mth node from head . temp is the prev node of p
	 //{
		// count++;
		// temp=p;
		// p=p->next;
	 //}
	 //struct ListNode *ans;

	 //if(temp)   // reverse portion between m & n . when m=1 : temp=NULL 
		// temp->next=reverse(p,n,m,&ans);
	 //else        // for cases where m=1 i.e. head is changed
		// head=reverse(p,n,m,&ans);

	 //p->next=ans;  // ans contain the address of next node of n .
	 //return head;
 }