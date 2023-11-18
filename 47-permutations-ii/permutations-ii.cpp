class Solution {
private:
    void backTrack(vector<vector<int>>& res, vector<int>& curr, unordered_map<int,int>& m, vector<int>& nums) {
        if(curr.size() == nums.size()) {
            res.push_back(curr);
        }

        for(auto itr = m.begin(); itr != m.end(); itr++) {
            if(itr->second == 0) continue;
            curr.push_back(itr->first);
            itr->second -= 1;
            backTrack(res, curr, m, nums);
            curr.pop_back();
            itr->second += 1;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        backTrack(res, curr, m, nums);
        return res;
    }
};