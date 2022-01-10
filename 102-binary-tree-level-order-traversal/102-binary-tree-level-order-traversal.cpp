class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty() && root){
            int size_of_q = q.size();
            vector<int> levels;
            while(size_of_q--){
                TreeNode* node = q.front();
                q.pop();
                levels.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            result.push_back(levels);
        }
        return result;
        
    }
};
