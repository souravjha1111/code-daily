class Solution {
public:
    //to represent TreeNode as node
    typedef TreeNode node;
    
    node* recur(node* root,int l,int h)
    {
        if(!root)
            return NULL;
        
        //if current node is greate than the range given
        //then we don't have to look to that node and right of that
        //we will look for left for smaller values
        if(root->val>h)
        {
            return recur(root->left,l,h);
        }
        //if current node is less than the range give
        //then we don't have to look to that node and left of that
        //we will look for right for larger values
        if(root->val<l)
        {
            return recur(root->right,l,h);
        }
        
        //if current node is in the range we will look both ends of the node
        root->left = recur(root->left,l,h);
        root->right = recur(root->right,l,h);
        
        //return current node
        return root;
    }
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return recur(root,low,high); 
    }
};

