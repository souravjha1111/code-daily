/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(vector<int> nums, int l, int r){
        if(l>r)
            return NULL;
        int maxi = l;
        for(int i=l; i<=r; i++){
            if(nums[i]>nums[maxi]){
                maxi  = i;
            }
        }
        TreeNode* temp = new TreeNode(nums[maxi]);
        temp->left = helper(nums, l, maxi-1);
        temp->right = helper(nums, maxi+1, r);
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int maxi =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[maxi])
                maxi = i;
        }
        TreeNode* temp = new TreeNode(nums[maxi]);
        temp->left = helper(nums, 0, maxi-1);
        temp->right = helper(nums, maxi+1, nums.size()-1);
        return temp;
    }
};