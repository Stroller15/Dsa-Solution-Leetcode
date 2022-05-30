class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  size = nums.size();
        int major = nums[0],count = 1;
        
        for(int i =1 ;i < size ; i++)
        {
            if(nums[i] == major)
                count++;
            else
                count--;
            
            if(count == 0)
            {
                major = nums[i];
                count = 1;
            }
        }
        
        return major;
        
    }              //moore's algoritham
};