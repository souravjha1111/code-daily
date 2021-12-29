class Solution {
public:
    
    void solver(string s, int pos, string str, vector<string> &result){
        if(pos == s.length()){
            result.push_back(str);
            return;
        }
        str +=s[pos];
        solver(s, pos+1,str,result);
        if(!(isdigit(str[pos]))  && isupper(str[pos])){
            str[pos] = tolower(str[pos]);
            solver(s, pos+1,str,result);
        }
       else if(!(isdigit(str[pos]))  && islower(str[pos])){
            str[pos] = toupper(str[pos]);
            solver(s, pos+1,str,result); 
       }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        string str="";
        solver(s, 0, str, result);
        return result;
    }
};