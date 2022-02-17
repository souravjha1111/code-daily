class Solution {
public:
    
void find_target_sum(vector<vector<int>> &result, int curr_sum, int target, int pos, vector<int> temp, vector<int>& candidates){
    if(curr_sum == target){
        result.push_back(temp);
        return ;
    }
    if(curr_sum > target){
        return ;
    }
    for(int temp_pos = pos; temp_pos<candidates.size(); temp_pos++){
        temp.push_back(candidates[temp_pos]);
        find_target_sum(result, curr_sum + candidates[temp_pos], target, temp_pos, temp,candidates);
        temp.pop_back();
        }
        return;
    }
    
    
    
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
     if(candidates.size() == 0){
        return {};
    }
    /*
    for(int i=0;i<candidates.size();i++){
            if(candidates[i]>target){                  
                candidates.erase(candidates.begin()+i,candidates.end());
                i = candidates.size();
            }
        }
      */
      //int curr_sum =0;
        vector<int> temp;
        find_target_sum(result, 0, target, 0, temp,candidates);
        return result;
    }
};