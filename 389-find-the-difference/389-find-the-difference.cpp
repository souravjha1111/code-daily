class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> vecto;
        for(auto el: t)
            vecto[el]++;
        for(auto el: s)
            vecto[el]--;
        for(auto el:vecto){
            if(el.second>0)
                return el.first;
        }
    return 'a';
    }
};