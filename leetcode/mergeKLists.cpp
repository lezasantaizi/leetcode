#include "mergeKLists.h"

void func(ListNode*& first, ListNode* second)
{
	ListNode* new_head = new ListNode(0);
	ListNode* cur = new_head;
	while (first || second)
	{
		if (first&& (second == NULL|| first->val <= second->val) )
		{
			new_head->next = first;
			first = first->next;
		}
		else if(second&&(first == NULL   || first->val > second->val))
		{
			new_head->next = second;
			second = second->next;
		}
		new_head = new_head->next;
	}
	first = cur->next;
	delete cur;
}

ListNode* Solution98::mergeKLists(vector<ListNode*>& lists) 
{
	//方法1：超时
	//int list_num = lists.size();
	//if (list_num == 0)
	//{
	//	return NULL;
	//}
	//ListNode* new_head = new ListNode(0);
	//ListNode* cur = new_head;
	//int min_node_value = INT_MAX;
	//int min_index = 0;
	//int flag = 0;
	//while(1)
	//{
	//	flag = 0;
	//	min_node_value = INT_MAX;
	//	for (int i = 0 ;i< list_num;i++)
	//	{
	//		if(lists[i])
	//		{	
	//			if(min_node_value > lists[i]->val)
	//			{
	//				min_node_value = lists[i]->val;
	//				min_index = i;
	//			}
	//			flag++;
	//		}
	//	}
	//	if(flag<=1)
	//	{
	//		new_head->next = lists[min_index];
	//		break;
	//	}
	//	new_head->next = lists[min_index];
	//	new_head = new_head->next;
	//	lists[min_index] = lists[min_index]->next;
	//}
	//return cur->next;

	//方法2：
	
	int list_num = lists.size();
	if (list_num == 0)
	{
		return NULL;
	}
	while (1)
	{
		for (int i = 0 ;i < list_num/2;i++)
		{
			func(lists[i],lists[list_num - i-1]);
		}
		list_num = (list_num+1)/2;
		if (list_num == 1)
		{
			break;
		}

	}
	return lists[0];
}