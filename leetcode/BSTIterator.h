#include<vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator79 {
public:
	TreeNode* head;
	stack<TreeNode*> saveNode;
	BSTIterator79(TreeNode *root);
	bool hasNext() ;
	int next() ;
};