class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        
        for(int element : nums)
        {
            single = single ^ element;
        }
        return single;
    }
};


// ********************************************
// We can do this problem with Hashmap also