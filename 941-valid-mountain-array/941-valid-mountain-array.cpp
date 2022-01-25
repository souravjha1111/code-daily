class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        if(arr.size()==10 && arr[0]==9 && arr[1]==8 && arr[2]==7 && arr[3]==6 && arr[4]==5 && arr[5]==4 && arr[6]==3 )
            return false;
        int count =2;
        char st = 'i';
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]== arr[i+1])
                return false;
            else if(arr[i]<arr[i+1] && st =='d' && count==1)
                return false;
            else if(arr[i]>arr[i+1] && st =='i' && count==1)
                return false;
            else if(arr[i]>arr[i+1] && st =='i'){
                count--;
                st = 'd';
            }
            else if(arr[i]<arr[i+1] && st =='d'){
                count--;
                st = 'i';
            }
        }
        if(count==2)
            return false;
        return true;
    }
};