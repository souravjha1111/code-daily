class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int current_repeat=1;
        int new_max_repeat=1;
        int repeat_num=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==arr[i+1]){
               new_max_repeat++;                
               if(new_max_repeat>current_repeat)
                    current_repeat=new_max_repeat;
                    repeat_num=arr[i];
            }
            
        }
    return repeat_num;
    }
};