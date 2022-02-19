class Solution {
public:
    vector<string>list={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.size()==0)
            return res;
        solve("",0,digits,res);
        return res;   
    }   
    void solve(string currstr,int i,string digits,vector<string>&res){
        if(i==digits.length()){
            res.push_back(currstr);
            return;
        }
        int dig=digits[i]-'0';
        for(auto ch:list[dig]){
            solve(currstr+ch,i+1,digits,res);
        }
    }
};
