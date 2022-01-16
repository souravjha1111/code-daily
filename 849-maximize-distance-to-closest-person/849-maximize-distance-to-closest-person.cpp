class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int countzero = 0;
        int countl = 0;
        int countr = 0;
        int curr = 0;
        for(int i = 0; i<seats.size(); i++){
            if(seats[i]==0)
                curr ++;
            else 
                curr = 0;
            countzero = max(countzero, curr);
        }
        int i = seats.size()-1;
        while(seats[i]==0){
            countl++;
            i--;
        }

        i = 0;
        while(seats[i]==0){
            countr++;
            i++;
        }
        
        if(countzero%2 ==0){
            if(countzero/2>countl &&  countzero/2>countr)
                return countzero/2;
        }
        else{
            if((countzero/2 + 1 )>countl &&  (countzero/2 + 1)>countr)
                return countzero/2 +1;
        }
        return max(countl , countr);
            
    }
};
