class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;
        for(char x:magazine){
            mp[x]++;
        }
        for(char x: ransomNote){
            if(mp[x]>0){
                mp[x]--;
            }
            else
                return false;
        } 
        return true;
    }
};