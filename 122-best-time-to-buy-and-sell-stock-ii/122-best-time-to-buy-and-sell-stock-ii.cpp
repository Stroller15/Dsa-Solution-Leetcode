class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            int currProfit = prices[i] - prices[i-1];
            if(currProfit > 0){
                profit +=currProfit; 
            }
        }
        return profit;
    }
};