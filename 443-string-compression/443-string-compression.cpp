class Solution {
public:
    int compress(vector<char>& chars) {
        string res ="";
        int counter =1;
        for(int i=0; i<chars.size()-1; i++){
            if(chars[i]==chars[i+1])
                counter++;
            else{
                res+= chars[i];
                if(counter>1)
                    res+= to_string(counter);
                counter =1;
            }
        }
        res+=chars[chars.size()-1];
        if(counter>1)
            res+=to_string(counter);
            
        chars.clear();
        for(auto el:res){
            chars.push_back(el);
            }
        return res.length();
    }
};