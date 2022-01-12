class Solution {
public:
TreeNode* searchBST(TreeNode* root, int val) {
if(root==NULL)
    return NULL;
    
if(val == root->val)
    return root;
    
else if(root->val>val)
    return searchBST(root->left, val);
    
else if(root->val<val)
    return searchBST(root->right, val);
    return NULL;

}
};
