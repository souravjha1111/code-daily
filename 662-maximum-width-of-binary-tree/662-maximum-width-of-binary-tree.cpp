class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        int ans=1;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int size = q.size();
            int start = q.front().second;
            int end = q.back().second;
            ans = max(ans, end-start+1);
            for(int i=0; i<size; i++){
                pair<TreeNode*, int> p =q.front();
                int idx = p.second-start;
                
                q.pop();
                if(p.first->left)
                    q.push({p.first->left, idx*2+1});
                if(p.first->right)
                    q.push({p.first->right, idx*2+2});
            }
        }
        return ans;
    }
};






// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         if(root->left ==NULL && root->right ==NULL)
//             return 1;
//         queue<TreeNode* > q;
//         q.push(root);
//         int res =0;
//         while(q.size()){
//             int size = q.size();
//             res = max(res, size);
//             while(size--){
//                 TreeNode* top = q.front();
//                 q.pop();
//                 if(top )
//                 {if( top->left || top->right){
//                     q.push(top->left);
//                     q.push(top->right);
//                 }}
//             }
//         }
//         return res;
//     }
// };