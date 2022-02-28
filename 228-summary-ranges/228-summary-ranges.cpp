class Solution {
public:
        vector<string> summaryRanges(vector<int>& nums) {
        int i = 0,j = 0;
        vector<string> final_result;
        while(i < nums.size()){
            string start_string = to_string(nums[i]);
            j = i;
            while(j < nums.size()-1 && nums[j] + 1 == nums[j + 1])
                j++;
            if(i != j) 
              start_string = start_string + "->" + to_string(nums[j]);
            final_result.push_back(start_string);
            i = j + 1;
        }
        return final_result;
    }
};