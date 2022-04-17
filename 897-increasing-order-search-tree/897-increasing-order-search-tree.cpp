class Solution {
public:
  TreeNode* fin = new TreeNode();
    TreeNode *temp = fin;
    
    void inorder(TreeNode*root){
        if(root==NULL) return;
        inorder(root->left);
        TreeNode* cur = new TreeNode(root->val);
        temp->right =  cur;
        temp = temp->right;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root); 
        return fin->right;
        
    }
}; 