class Solution {
public:
    
    void solver(TreeNode* root, int& sum){
        if(root==NULL)
            return;
        solver(root->right, sum);
        sum+=root->val;
        root->val = sum;
        solver(root->left, sum);
        // sum+=root->val;
        // root->val = sum;
        
    }
    
    
    TreeNode* convertBST(TreeNode* root) {
        TreeNode* res = root;
        int x =0;
        solver(res, x);
        return res;
    }
};