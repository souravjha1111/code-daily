class Solution {
public:
    bool detectCapitalUse(string word) {
      int i=0,count=0;
        for(i=0;i<word.size();i++){
            if(isupper(word[i]))
                ++count; //for upper case only
        }
            if(count==i){
            return true;
        }
        for(i=0,count=0;i<word.size();i++){
            if(islower(word[i]))
                ++count;
        }
            if(count==i){
            return true; //for lower case only
        }
    if(isupper(word[0])){
            for(i=1,count=0;i<word.size();i++){
            if(islower(word[i]))
                ++count;
        }
        if(count==i-1){
            return true; //for all
        }
    }
        return 0;
    }
};