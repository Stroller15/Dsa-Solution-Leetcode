class Solution {
public:
    bool check(vector<int>& nums) {

        int breakCount = 0;
        int n = nums.size();
        
        for(int i = 1 ; i < nums.size() ; i++) {
            if(nums[i-1] > nums[i]) {
                breakCount++;
            }
        }
         if(nums[n-1]>nums[0]){
            breakCount++;
        }

        return breakCount <= 1;
    }
};