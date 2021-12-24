class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        int i=0,j=0;
        while(i<firstList.size() && j<secondList.size()){
            int back=max(firstList[i][0], secondList[j][0]);
            int front=min(firstList[i][1], secondList[j][1]);
            if(back<=front){
                vector<int> temp;
                temp.push_back(back);
                temp.push_back(front);
                result.push_back(temp);
            }
            if(firstList[i][1] < secondList[j][1])
                i++;
            else 
                j++;
        }
        return result;
    }
};