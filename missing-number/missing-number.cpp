class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            temp = temp ^ nums[i];
        }
        for(int i = 1 ; i <= nums.size() ; i++){
            temp = temp ^ i;
        }
        return temp;
        
    }
};