class Solution {
public:
    int leftheight(TreeNode* root){
        int height=0;
        while(root){
            height++;
            root= root->left;
        }
        return height;
    }
    int rightheight(TreeNode* root){
        int height=0;
        while(root){
            height++;
            root= root->right;
        }
        return height;
    }
    
    
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
       int lh = leftheight(root);
        int rh = rightheight(root);
        if(lh==rh)
            return (1<<lh)-1;
        return 1+ countNodes(root->left) + countNodes(root->right);
    }
};