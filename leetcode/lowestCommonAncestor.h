#include<vector>
#include <iostream>
#include <string>
#include <map>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution83 {
public:
TreeNode* result;
int func(TreeNode* root, TreeNode* p,TreeNode* q);
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
};