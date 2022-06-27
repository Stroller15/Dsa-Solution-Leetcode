class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n) , lArr(n) , rArr(n) ;
        lArr[0] = 1; rArr[n-1] = 1;
        
        for(int i = 1 ; i < n ; i++){
            lArr[i] = nums[i-1] * lArr[i-1];
        }
        for(int i = n-2 ; i >= 0 ; i--){
            rArr[i] = nums[i+1] * rArr[i+1];
        }
        for(int i = 0 ; i < n ; i++){
            res[i] = rArr[i] * lArr[i];
        }
        return res;
    }
};