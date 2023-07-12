class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
    int ans = 0, i = 0, last = INT_MAX;
    while(i < nums.size()){
        if(nums[i] > threshold || (i > 0 && (nums[i] % 2) == (nums[i-1] % 2)) ){
            ans = max(ans, i - last );
            last = INT_MAX;
        }
        if(last == INT_MAX && nums[i] <= threshold && nums[i] % 2 == 0) last = i;
        i++;
    }
    ans = max(ans, i - last );
    return ans;
}
};