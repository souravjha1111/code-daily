class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.length()>s.length())
            return {};
        int indx = 0;
        int count=0;
        vector<int> vec1(26,0);
        vector<int> res;
        vector<int> vec2(26,0);
        for(int i=0; i<p.length(); i++){
            vec1[p[i]-'a']++;
            count++;
        }
        for(int i=0; i<p.length(); i++){
            vec2[s[i]-'a']++;
        }
        if(vec2==vec1)
            res.push_back(0);
        for(int i=1; i<=s.length()-p.length(); i++){
            vec2[s[i-1] - 'a']--;
            vec2[s[i+p.length()-1] - 'a']++;
            if(vec2==vec1)
                res.push_back(i);
        }
        return res;
    }
};