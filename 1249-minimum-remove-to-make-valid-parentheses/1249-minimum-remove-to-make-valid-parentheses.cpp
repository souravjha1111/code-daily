class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        unordered_set<int> temp;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' ){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty())
                     st.pop();
                else{
                    temp.insert(i);
                }
            }
        }
        while(!st.empty()){
            temp.insert(st.top());
            st.pop();
        }
        
        string res="";
        for(int i=0; i<s.size(); i++){
            if(temp.find(i)==temp.end())
                res+=s[i];
        }
        return res;
    }
};