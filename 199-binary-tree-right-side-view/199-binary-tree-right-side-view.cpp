class Solution {
public:
    vector<int> ans;
    void solve(TreeNode* root, int curr){
        if(!root)
            return;
        if(curr==ans.size()){
            ans.push_back(root->val);}
        solve(root->right, curr+1);
        solve(root->left, curr+1);
        
    }
    vector<int> rightSideView(TreeNode* root) {
    solve(root,0);
    return ans;
    }
};