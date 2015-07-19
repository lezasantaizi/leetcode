#include "recoverTree.h"

TreeNode* wrong1,*wrong2,*temp;
void func(TreeNode* root)
{
	if(root == NULL)
		return;
	func(root->left);
	if (root->val < temp->val)
	{
		if(wrong1 == NULL)
			wrong1 = temp;
		wrong2 = root;
	}
	temp = root;
	func(root->right);
}

void Solution65::recoverTree(TreeNode* root) 
{
	//方法1：
	 //temp = new TreeNode(INT_MIN);
	 //wrong1 = NULL;
	 //wrong2 = NULL;
	 //func(root);
	 //int temp_value = wrong1->val;
	 //wrong1->val = wrong2->val;
	 //wrong2->val = temp_value;

	//方法2：
	//stack<TreeNode*> saveNode; 
	//TreeNode* error_node1 = NULL, *error_node2 = NULL, *temp_node = NULL;
	//int cnt = 0;
	//temp_node = new TreeNode(INT_MIN);
	//while (root || saveNode.empty() != true)
	//{
	//	while (root)
	//	{
	//		saveNode.push(root);
	//		root = root->left;
	//	}

	//	TreeNode* temp = saveNode.top();
	//	if(temp->val < temp_node->val)
	//	{
	//		if(error_node1 == NULL)
	//			error_node1 = temp_node;
	//		error_node2 = temp;
	//		cnt++;
	//		if(cnt == 2)
	//			break;
	//	}
	//	temp_node = temp;
	//	saveNode.pop();
	//	root = temp->right;

	//}
	//int temp_value = error_node1->val;
	//error_node1->val = error_node2->val;
	//error_node2->val = temp_value;



////方法3：
	TreeNode* cur = root;
	TreeNode* pre = NULL;
	TreeNode* wrong1 = NULL;
	TreeNode* wrong2 = NULL;
	while(cur!=NULL) {
		if(cur->left!=NULL) {
			TreeNode* temp = cur->left;
			while(temp->right!=NULL && temp->right!=cur)
				temp = temp->right;
			if(temp->right==NULL) {
				temp->right = cur;
				cur = cur->left;
			}
			else {
				temp->right=NULL;
				//print
				if(pre!=NULL && pre->val>cur->val) {
					if(wrong1==NULL)
						wrong1=pre;
					wrong2 = cur;
				}
				pre = cur;
				cur=cur->right;
			}
		}
		else {
			//print
			if(pre!=NULL && pre->val>cur->val) {
				if(wrong1==NULL)
					wrong1=pre;
				wrong2 = cur;
			}
			pre = cur;
			cur=cur->right;
		}
	}
	int t = wrong1->val;
	wrong1->val = wrong2->val;
	wrong2->val = t;
}