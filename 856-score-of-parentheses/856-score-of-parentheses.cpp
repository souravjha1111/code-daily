class Solution {
public:
int scoreOfParentheses(string s) {
        stack<pair<char, int>> st;
        int res=0;

    for(int i=0; i<s.size(); i++) {
            if(s[i]=='(')
                st.push({'(', 0});
            else {
                if(st.top().first=='(') {
                    st.pop();
                    st.push({'#', 1});
                }
                else {
                    int level=0;
                    while(st.top().first=='#') {
                        level+=st.top().second;
                        st.pop();
                    }
                    st.pop();
                    st.push({'#', 2*level});
                }
            }
        }
        while(!st.empty()) {
            res += st.top().second;
            st.pop();
        }
        return res;
    }
};