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

class Solution82 {
public:
	map<int,int> saveNode;
	TreeNode* func(vector<int>& inorder, vector<int>& postorder,int start ,int end, int& prePos);
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
};