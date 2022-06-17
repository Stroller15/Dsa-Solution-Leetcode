class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size() ,sum = 0;
        for(int i = 0 ; i < size ; i++){
            
            sum += nums[i];
        }
        
        int originalSum = size*(size + 1)/2;
        return originalSum - sum; 
        
    }
};