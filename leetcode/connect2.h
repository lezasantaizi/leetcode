#include<vector>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution85 {
public:
	void connect(TreeLinkNode *root) ;
};




