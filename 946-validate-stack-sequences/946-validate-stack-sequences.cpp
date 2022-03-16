class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        bool res = true;
        int index=0;
        for(auto el:pushed){
            while(!st.empty() && st.top()==popped[index]){
                st.pop();
                index++;
            }
            st.push(el);
        }
        while(!st.empty() && st.top()==popped[index]){
            st.pop();
            index++;
        }
        return st.empty();
    }
};