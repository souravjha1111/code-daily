class Solution {
public:
    string getSmallestString(int n, int k) {
        int avg=k/n,rem=k%n;
        string str="";
        vector<int> arr(n,avg);
        arr[n-1]+=rem;
        int i=0,j=n-1;
        while(i<j){
            int p=26-arr[j];
            if(arr[i]>p){
                arr[i]-=p;
                arr[j--]=26;
            }
            else{
                p=p-arr[i]+1;
                arr[i++]=1;
                arr[j]=26-p;
            }
        }
        for(int i=0; i<n;i++){
            str+=('a'+arr[i]-1);
        }
        return str;
    }
};