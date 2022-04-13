public class Solution {
    public int[][] GenerateMatrix(int n) {

        int[][] res = new int[n][];
        for (int i = 0; i < n; i++)
            res[i] = new int[n];
        
        int counter=0;
        int maxr=n-1, maxc = n-1, minr = 0, minc=0;
        var totl = n*n;
        var num=1;
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
}