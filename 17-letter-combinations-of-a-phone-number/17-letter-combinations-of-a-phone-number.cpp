class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> buttons= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res={};
        
        int leng = digits.length();
        if(leng==0)
            return {};
        else if(leng==1){
            for(auto el:buttons[digits[0]-'0']){
                string c = "";
                c.push_back(el);
                res.push_back(c);
            }
        }
        else if(leng==2){
            for(auto el:buttons[digits[0]-'0'])
                for(auto el1:buttons[digits[1]-'0']){
                string c = "";
                c.push_back(el);
                c.push_back(el1);
                res.push_back(c);
                }
        }
        
        
        else if(leng==3){
            for(auto el:buttons[digits[0]-'0'])
                for(auto el1:buttons[digits[1]-'0'])
                    for(auto el2:buttons[digits[2]-'0']){
                string c = "";
                c.push_back(el);
                c.push_back(el1);
                c.push_back(el2);
                res.push_back(c);
                }
        }
        
        
        else if(leng==4){
            for(auto el:buttons[digits[0]-'0'])
                for(auto el1:buttons[digits[1]-'0'])
                    for(auto el2:buttons[digits[2]-'0'])
                        for(auto el3:buttons[digits[3]-'0']){
                string c = "";
                c.push_back(el);
                c.push_back(el1);
                c.push_back(el2);
                c.push_back(el3);
                res.push_back(c);
                }
        }
        
        
        return res;
    }
};