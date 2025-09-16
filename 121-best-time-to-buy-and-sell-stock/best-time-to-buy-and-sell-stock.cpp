class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0 ;
        int buy_price = prices[0];
        
        for(int val : prices){
            if(val < buy_price){
                buy_price = val ;
            }
            else {
                max_profit = max(max_profit, val - buy_price);
            }
  
        }
        return max_profit ;
    }
};