// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preOrder, vector<int>& inOrder) {
//         map<int, int> mp;
//         for(int i=0; i<inOrder.size(); i++)
//             mp[inOrder[i]] =i;
        
//         TreeNode* root  = build(preOrder, 0, preOrder.size()-1, inOrder,0, inOrder.size()-1, mp);
//         return root;
//     }
    
//     TreeNode* build(vector<int> &preorder, int prestart, int preend, vector<int> &inorder, int instart, int inend, map<int, int> mp){
//         if(prestart> preend || instart> inend)
//             return NULL;
//         TreeNode* root = new TreeNode(preorder[prestart]);
        
//         int inroot = mp[root->val];
//         int numsleft = inroot - instart;
        
//         root->left = build(preorder, prestart+1, prestart+numsleft, inorder, instart, inroot-1, mp);
//         root->right = build(preorder, prestart +numsleft+1, preend, inorder, inroot+1, inend, mp);
//         return root;
//     }
// };

class Solution {
    int preOrderIndex;
    unordered_map<int,int> inOrderIndexMap;
public:
    TreeNode *helper(vector<int>preorder, int left, int right)
    {
        if (left>right) return NULL;
        int rootVal = preorder[preOrderIndex];
        preOrderIndex++;
        int inOrderIndex = inOrderIndexMap[rootVal];
        TreeNode *root = new TreeNode;
        root->val = rootVal;
        root->left = helper(preorder, left, inOrderIndex-1);
        root->right = helper(preorder, inOrderIndex+1, right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preOrderIndex=0;
        for(int i=0; i<inorder.size(); i++) inOrderIndexMap[inorder[i]]=i;
        return helper(preorder, 0, preorder.size()-1);
    }
};
