class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() , res = 0;
        for(int i = 0 ; i < n ; ++i){
           
            res ^= nums[i];
        }
          for(int i = 0 ; i <= n ; ++i){
           
            res ^= i;
        }
        
        return res;
    }
};