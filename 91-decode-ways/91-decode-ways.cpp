class Solution {
public:
    int numDecodings(string s) {
        int size =s.size();
        if(size==0 || s[0]=='0')
            return 0;
        if(size==1)
            return 1;
        int oneback=1, twoback=1;
        for(int i=1; i<size; i++){
            int ones = s[i]-'0';
            int second = (s[i-1]-'0')*10 +ones;
            int count =0;
            if(ones>0)
                count+=twoback;
            if(second>=10 && second<=26)
                count+=oneback;
            oneback=twoback;
            twoback =count;
        }
        return twoback;
    }
};

// class Solution {
// public:
//     int numDecodings(string s) {
//         int size = s.size();
//         for(int i=0; i<size; i++){
//             if(s[i]=='0' && i==0)
//                 return 0;
//             else if(i!=0 && s[i]=='0' && (s[i-1]-'0'!=2 && s[i-1]-'0'!=1)){
//                 return 0;
//             }
//         }
//         if(size==1)
//             return 1;
        
//         if(s=="10" || s=="20")
//             return 1;
//         else  if(size==2 && s[0]-'0'<=2 && s[1]-'0'<=6)
//             return 2;
        
//         //
//         int res =1;
//         int streak =0;
//         for(int i=1; i<size-1; i++){
//             if(s[i-1]!='0'  && s[i]!='0' && s[i+1]!='0'&& (s[i-1]-'0'==1 ))
//                 res++;
//             if(s[i-1]!='0'  && s[i]!='0' && s[i+1]!='0'&& (s[i-1]-'0'==2 && s[i]-'0'<=6))
//                 res++;
//         }
//     if(size>=3 && s[size-1]-'0'<=7 && s[size-2]-'0'<=2 && s[size-2]-'0'!=0)
//         res++;
//     return res;
//     }
// };


    