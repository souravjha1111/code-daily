class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> exp(26,0);
        vector<int> curr(26,0);
        for(auto el:p){
            exp[el-'a']++;
        }
        vector<int> res;
        for(int i=0; i<s.length(); i++){
            curr[s[i]-'a']++;
            if(i>=p.length())
                curr[s[i-p.length()] - 'a']--;
             if(curr==exp)
                res.push_back(i-p.length()+1);
            }
        
        return res;
    }
};
