class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
      if(prices.size()<2)
      {
          return 0;
      }  
      sort(prices.begin(),prices.end());
      int ans=prices[0]+prices[1];
      if(money<ans)
      {
          return money;
      }
      return money-ans;
    }
};
