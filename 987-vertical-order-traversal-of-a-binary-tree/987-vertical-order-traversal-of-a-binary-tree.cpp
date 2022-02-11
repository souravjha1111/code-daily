class Solution {
public:
    class vpair{
        public:
        TreeNode *node;
        int vl;
        //int hl;
        vpair(TreeNode *node,int vl){
            this->node = node;
            this->vl = vl;
        }
    };
    
    class comp{
        public:
        bool operator()(vpair &a, vpair &b)
    {
          if(a.vl == b.vl) return a.node->val > b.node->val;
        
            else  return a.vl > b.vl;
            //else return a.node->val < b.node->val;
    }
        
    };
    
    void widthofBT(TreeNode* root,vector<int>&minmax,int vl){
        if(root == NULL)return;
        minmax[0]=min(minmax[0],vl);
        minmax[1]=max(minmax[1],vl);
        widthofBT(root->left,minmax,vl-1);
        widthofBT(root->right,minmax,vl+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<int>minmax(2);
        
        widthofBT(root,minmax,0);
        
        int width = minmax[1]-minmax[0]+1;
        vector<vector<int>>ans(width);
        priority_queue<vpair,vector<vpair>,comp>q1;
        priority_queue<vpair,vector<vpair>,comp>q2;
        q1.push(vpair(root,abs(minmax[0])));
        
        while(q1.size() != 0){
            int size = q1.size();
            while(size--){
                vpair p = q1.top(); q1.pop();
                TreeNode *node = p.node;
                int vl = p.vl;
                //int hl = p.hl;
                //cout<<vl<<endl;
                ans[vl].push_back(node->val);
                if(node->left) q2.push(vpair(node->left,vl-1));
                if(node->right) q2.push(vpair(node->right,vl+1));
                    
            }
            
            swap(q1,q2);
        }
        
        return ans;
        
        
    }
};