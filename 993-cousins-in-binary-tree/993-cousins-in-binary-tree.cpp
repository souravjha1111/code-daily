class Solution {
public:
    vector<pair<int, int> >res;
    void findparent(TreeNode* root, int parent, int depth, int x, int y){
        if(!root)
            return;
        if(root->val == x || root->val == y)
            res.push_back({parent, depth});
        
        findparent(root->left, root->val, depth+1, x,y);
        findparent(root->right, root->val, depth+1, x,y);
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        int depth =0;
        findparent(root, 0, depth, x, y);

            if(res[0].second !=res[1].second)
                return false;
            else if(res[0].first == res[1].first)
                return false;

        return true;
    }
};