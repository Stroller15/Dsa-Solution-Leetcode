class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return nums[0];
        
        sort(nums.begin() , nums.end());
        
        int first = 0 , second = 1;
        
        for(int i = 0 ; i < size ; i++){
            if(nums[first] != nums[second])
               { return nums[first];
            break;}
        
        else{
            first += 2;
            second +=2;
        } 
        }
        
        return 0;
    }
};