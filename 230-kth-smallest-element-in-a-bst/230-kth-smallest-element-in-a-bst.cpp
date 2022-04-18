class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                TreeNode* node = q.front();
                q.pop();
                pq.push(node->val);
                if(node->left){
                    q.push(node->left);
                }
                        
                if(node->right){
                    q.push(node->right);
                }
            }
            while(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};