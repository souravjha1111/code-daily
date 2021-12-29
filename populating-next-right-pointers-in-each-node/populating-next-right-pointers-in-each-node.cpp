class Solution {
public:
    Node* returning;
    Node* connect(Node* root) {
        helper(root);
        return returning;
    }
    void helper(Node* root) {
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);   
        while(!q.empty() && root){
            int size = q.size();
            vector<Node*> level;
            while(size--){
                Node* node = q.front();
                q.pop();
                level.push_back(node);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right); 
            }

        for(int i=1; i<level.size(); i++){
            level[i-1]->next = level[i];
        }
        }
        returning = root;
    }
};