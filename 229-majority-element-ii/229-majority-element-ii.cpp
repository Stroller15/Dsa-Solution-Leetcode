class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();
        unordered_map<int,int> umap;
        
        for(int i = 0 ; i < size ; i++)
            umap[nums[i]]++;
        
        for(auto x : umap)
           { 
            if(x.second > size/3)
                res.push_back(x.first);
                }
        return res;
        
        
    }
};