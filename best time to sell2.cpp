class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyed=0;
        int current_balance=0;
        if(prices.size()<2)
            return 0;

        for(int i=0;i<prices.size()-1;i++){
            if(buyed==0){
                if(prices[i+1]>prices[i]){
                buyed=1;
                current_balance=current_balance-prices[i];
                }
            }
            else{
                if(prices[i+1]<prices[i]){
                buyed=0;
                current_balance=current_balance+prices[i];
                }
            }
        }
     if(buyed==1)
         current_balance = current_balance + prices[prices.size()-1];
    return current_balance;
        }
};