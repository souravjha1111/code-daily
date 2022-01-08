class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  
        for(auto element:s){
            if(element=='(' or element=='{' or element=='[') st.push(element);  
            else {
                if(st.empty() or (st.top()=='(' and element!=')') or 
                   (st.top()=='{' and element!='}') or 
                   (st.top()=='[' and element!=']'))
                    return false;
                st.pop();  
            }
        }
        return st.empty(); 
    }
};