class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size() , profit = 0 , minSoFar = prices[0];
        for(int i = 1 ; i < n ; i++){
            minSoFar = min(prices[i] , minSoFar);
            int currProfit = prices[i] - minSoFar;
            profit = max(profit , currProfit);
        }
        return profit;
    }
};