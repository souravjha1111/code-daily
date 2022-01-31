class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       vector<int> temp_vector2;
        for(int i=0,total=0;i<accounts.size();i++ ){
        for(int j=0;j<accounts[i].size();j++)
            total = total+accounts[i][j];
        temp_vector2.push_back(total);
            total =0;
    }
        sort(temp_vector2.begin(),temp_vector2.end());
        return temp_vector2[temp_vector2.size()-1];
    }

};