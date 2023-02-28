class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int secondElement = target - nums[i];
            if(mp.find(secondElement) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[secondElement]);
                  return ans;
            }
              
            else
                mp[nums[i]] = i; 
        }
        return {};
    }
};