class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int size = nums.size();
       int total = 0 , leftSum = 0;
        for(int sum : nums)         // total sum of nums
            total +=  sum;
        for(int i = 0 ; i < size ; i++){
            int rightSum = total - (leftSum + nums[i]);
            if(rightSum == leftSum)
                return i;
            else
                leftSum +=  nums[i];
            
        }
        return -1;
        
        
        
    }
};