class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int i = 0 ; 
        int begin = 0;
        for(int j = 0 ; j < size ; j++)
        {
            if(nums[j] != val)
            {
                nums[begin] = nums[j];
               
                begin++;
            }
            
        }
        
        return begin;
    }
};