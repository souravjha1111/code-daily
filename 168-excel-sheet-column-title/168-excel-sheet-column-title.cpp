class Solution {
public:
string convertToTitle(int c) {
        string s;
        int temp=0;
        while(c){
        temp=c%26;
        c/=26;
        if(temp==0){
        s.push_back('Z');
            c--;
        }
        else{
            s.push_back('A'+temp-1);}
        }
        reverse(s.begin(),s.end());
        return s;
    }
};