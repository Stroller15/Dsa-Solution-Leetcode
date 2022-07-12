class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++){
            int temp = nums[i]*nums[i];
            res.push_back(temp);
        }
        sort(res.begin() , res.end());
        return res;
    }
};