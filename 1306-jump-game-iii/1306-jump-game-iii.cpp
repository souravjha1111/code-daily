class Solution {
public:
  bool canReach(vector<int>& arr, int start) {
        queue<int>q;
        int n=arr.size();
        q.push(start);
        while(!q.empty()){
            int point=q.front();
            q.pop();
            if(point-arr[point]>=0){
                if(arr[point-arr[point]]==0){
                    return true;
                }
                else if(arr[point-arr[point]]>0){
                    q.push(point-arr[point]);
                }
            }
            if(point+arr[point]<n){
                if(arr[point+arr[point]]==0){
                    return true;
                }
                else if(arr[point+arr[point]]>0){
                    q.push(point+arr[point]);
                }
            }
            arr[point]=-1;
        }
        return false;
    }
};