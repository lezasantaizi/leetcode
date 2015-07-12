#include<vector>
#include <iostream>
#include <string>
#include <map>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution80 {
public:
	map<int,int> saveOrder;
	TreeNode*  func(vector<int>& preorder,vector<int>& inorder,int start, int end, int& prePos);
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) ;
};