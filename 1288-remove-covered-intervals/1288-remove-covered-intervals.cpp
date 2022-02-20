class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());        
        auto curr = intervals[0];
        int res = 1;  
        for(int i= 1; i<intervals.size(); ++i)
        {
            if(intervals[i][0] > curr[0] && intervals[i][1] > curr[1])
                ++res;
            if(intervals[i][1] > curr[1])
            {
                curr = intervals[i];
            }
        }
        
        return res;       
    }

}; 
