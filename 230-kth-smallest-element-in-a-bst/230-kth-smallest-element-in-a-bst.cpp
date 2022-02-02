class Solution {
private:
    int count=0;
    int ans=0;
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root){
            kthSmallest(root->left,k);
            count++;
            if(count==k){
                ans=root->val;
            }
            kthSmallest(root->right,k);
        }
        return ans;
    }
};
