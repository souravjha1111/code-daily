class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int start,end;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> final_vector;
        for(int i=0;i<size-2;i++){
            if(i>0){
                while(nums[i-1]==nums[i] && i<size)
                    i++;
            }
            start = i; end =size-1;
            while(start<end){
                if((nums[i] + nums[start] + nums[end]) == 0){
                    int final_vector_size = final_vector.size();
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    final_vector.push_back(temp);
                    end--;
                    start++;
                    }
                else if((nums[i] + nums[start] + nums[end])>0)
                    end--;
                else
                    start++;
            }
        }
        return final_vector;
    }
};