class Solution {
public:
    int reachNumber(int t) {
        unsigned long long target = abs(t);
        long long k = ceil(0.5 * (-1 + sqrt(1 + 8* target)));
        cout<<k<<endl;
        
        long long diff = target - k*(k+1)*0.5;
        diff = abs(diff);
        cout<<diff<<endl;
        if(diff==0)
            return k;
        else if(diff%2==0)
            return k;
        else{
            if((diff + k + 1)%2==0)
                return k+1;
            else return k+2;
        }
        return 0;
    }
};