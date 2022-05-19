class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(target-nums[i]))
            {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};