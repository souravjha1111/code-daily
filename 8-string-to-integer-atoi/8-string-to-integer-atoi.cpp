class Solution {
public:
    int myAtoi(string s) {
        
        long int res = 0;
        int negativeFlag = -1;
        int spaceFlag = 0;
        int digitFlag = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                if(digitFlag) break;
                if(spaceFlag) break;
                continue;
            }
            else{
                spaceFlag = 1;
                if(s[i] == '-' && !digitFlag && negativeFlag == -1 ){
                    negativeFlag = 1;
                }
                else if(s[i] == '+' && !digitFlag && negativeFlag == -1){
                    negativeFlag = 0;
                }
                else if((int)s[i] >= 48 && (int)s[i] <=57){
                    digitFlag = 1;
                    res*=10;
                    res += (int)s[i]-48;
                    if(negativeFlag == 1){
                        if(-1*res < -1*pow(2,31)) return -1*pow(2,31);
                    }
                    else{
                        if(res > pow(2,31)-1) return pow(2,31)-1;
                    }
                }
                else break;
            }
        }
        
        return negativeFlag == 1 ? -1*res : res;
    }
};