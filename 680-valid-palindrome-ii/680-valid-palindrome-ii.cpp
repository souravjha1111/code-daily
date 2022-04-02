class Solution {
public:
    bool validPalindrome(string s) {
        if(s.length()<=1)
            return true;
   
        int i=0,j=s.size()-1;
        if(isPalindrome(s,i,j))
            return true;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                
             return (isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1) );
            }
            j--;
            i++;
        }
        return true;
    }
    bool isPalindrome(string s,int i,int j)
    {
        
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};