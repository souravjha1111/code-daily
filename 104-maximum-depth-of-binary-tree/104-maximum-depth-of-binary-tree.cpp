
class Solution {
public:
    int maxDepth(TreeNode* root, int zero = 0){
        if(!root)
            return 0;
        return 1 + max(maxDepth(root->left,0 ), maxDepth(root->right,0));
    }
};