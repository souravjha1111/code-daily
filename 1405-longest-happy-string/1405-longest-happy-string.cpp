class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string tmp="";
        while(a!=0 || b!=0 || c!=0){
			if(a>=b && a>=c){                  // Max value is a
                if(tmp.size()>=2 && (tmp[tmp.size()-2]!='a' || tmp[tmp.size()-1]!='a')){
                    tmp+='a';
                    a--;
                } else if(tmp.size()<2){
                    tmp+='a';
                    a--;
                }
                else{                                // Choosing Max from b and c
                    if(b>c){
                        tmp+='b';
                        b--;
                    } else if(c>0){
                        tmp+='c';
                        c--;
                    } else                            // If both b and c becomes 0 then we return
                        return tmp;
                }
            } else if(b>=a && b>=c){
                if(tmp.size()>=2 && (tmp[tmp.size()-2]!='b' || tmp[tmp.size()-1]!='b')){
                    tmp+='b';
                    b--;
                } else if(tmp.size()<2){
                    tmp+='b';
                    b--;
                }
                else{
                    if(c>a){
                        tmp+='c';
                        c--;
                    } else if(a>0){
                        tmp+='a';
                        a--;
                    } else
                        return tmp;
                }
            } else {
                if(tmp.size()>=2 && (tmp[tmp.size()-2]!='c' || tmp[tmp.size()-1]!='c')){
                    tmp+='c';
                    c--;
                } else if(tmp.size()<2){
                    tmp+='c';
                    c--;
                }else{
                    if(a>b){
                        tmp+='a';
                        a--;
                    } else if(b>0){
                        tmp+='b';
                        b--;
                    }  else
                        return tmp;
                }
            }
        }
        return tmp;
    }
};
