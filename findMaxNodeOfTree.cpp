#include <iostream>
struct TreeNode {
	int val;
	TreeNode* left,right;
	TreeNode(int val){
		this.val = val;
		this.left = this.right = NULL;
	}
};

	TreeNode * maxNode(TreeNode * root){
		Stack<TreeNode> st = NULL;
		st.push(root);
		TreeNode * current = root;
		
		while(current->left != NULL)
		{
			st.push(current->left);
			current = current->left;

