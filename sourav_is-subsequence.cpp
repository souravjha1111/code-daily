class Solution {
public:
    bool isSubsequence(string s, string t) {

        int s_count=0;
        for(int i=0;t[i]!='\0';i++){
            if(s[s_count]==t[i])
                s_count++;
        }
        if(s_count==s.length())
            return true;
        return 0;
    }
};