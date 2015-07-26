#include "copyRandomList.h"

RandomListNode *Solution96::copyRandomList(RandomListNode *head) 
{
	if (head == NULL)
	{
		return head;
	}
	//��ÿ���ڵ���½�һ���ڵ�
	RandomListNode* new_head = head;
	while (new_head)
	{
		RandomListNode* new_node = new RandomListNode(new_head->label);
		RandomListNode* temp = new_head->next;
		new_head->next = new_node;
		new_node->next = temp;
		new_head = temp;
	}

	//����randomָ��
	new_head = head;
	while (new_head)
	{
		if(new_head->random !=NULL)
		{
			new_head->next->random = new_head->random->next;
		}
		else
		{
			new_head->next->random = NULL;
		}
		new_head = new_head->next->next;
	}

	//����ԭ����
	new_head = head;
	RandomListNode* copy_head = new RandomListNode(0);
	RandomListNode* copy_head_temp = copy_head;
	while (new_head)
	{
		//RandomListNode* temp = new_head->next;
		copy_head->next = new_head->next;
		new_head->next = copy_head->next->next;
		copy_head = copy_head->next;
		new_head = new_head->next;
	}
	return copy_head_temp->next;
}