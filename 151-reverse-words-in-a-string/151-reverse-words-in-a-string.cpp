// class Solution {
// public:
//     string reverseWords(string s) {
//         int size = s.length();
//         int curr =0;
//         for(int i=s.length()-1; i>=0;){
//             while(i>=0 && s[i]==' ')
//                 i--;
//             curr = i;
//             while( i>=0 && s[i]!=' ')
//                 i--;
//            string str = s.substr(i+1, curr-i);
//            s.append(str);
//            s.append(" ");

//         }
//         s.erase(0,size);
//         s.erase(s.length()-2,2);
    
//     return s;

//     }};

class Solution {
public:
    string reverseWords(string s) {
        s = ' ' + s; string str = ""; string ans = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != ' ')
                str = str + s[i];
            
            else if(s[i] == ' ' && s[i+1] != ' ')
                str = str + ' ';
        }
        
        if(str[0] == ' ')
            str = str.substr(1);
        
        if(str[str.size()-1] == ' ')
            str = str.substr(0,str.length()-1);

        string temp = "";   str= str + " ";
        for(int i = 0 ; i < str.length() ; i++){
            
            if(str[i] != ' ')
                temp = temp + str[i];
            else{
                ans = temp + " " + ans;
                temp = "";
            }
        }
        
        ans.pop_back();
        return ans;
    }
};
