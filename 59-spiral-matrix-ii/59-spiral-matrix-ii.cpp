class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n,0));
        int counter=0;
        int maxr=n-1, maxc = n-1, minr = 0, minc=0;
        int totl = n*n;
        int num=1;
        while(counter<totl){
            for(int i=minr, j=minc; counter<totl && j<=maxc; j++){
                res[i][j]=num++;
                counter++;
            }
            minr++;
            
            for(int i=minr, j=maxc; counter<totl && i<=maxr; i++){
                res[i][j]=num++;
                counter++;
            }
            maxc--; 
            
            for(int i=maxr, j=maxc; counter<totl && j>=minc; j--){
                res[i][j]=num++;
                counter++;
            }
            maxr--;
            
            for(int i=maxr, j=minc; counter<totl && i>=minr; i--){
                res[i][j]=num++;
                counter++;
            }
            minc++;

        }
        return res;
    }
};
