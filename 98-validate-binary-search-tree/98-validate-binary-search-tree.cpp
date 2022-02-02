class Solution {
public:
bool isBST(TreeNode* root, long long int min, long long int max){
        if(root==NULL)
            return true;
        if(root->val < min || root->val > max)
            return false;
        return isBST(root->left, min, (long)(root->val)-1) && isBST(root->right, (long)(root->val)+1, max);
    }
    
    bool isValidBST(TreeNode* root) {
        return isBST(root, INT_MIN, INT_MAX);    
    }
};