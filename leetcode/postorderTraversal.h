#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution76 {
public:
	vector<int> postorderTraversal(TreeNode* root);
};