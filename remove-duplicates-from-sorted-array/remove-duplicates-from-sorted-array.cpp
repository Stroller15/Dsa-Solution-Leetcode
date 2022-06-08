class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        for(int j = i+1 ; j < size ; j++)
        {
            if(nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }     
        return i+1;
    }
};