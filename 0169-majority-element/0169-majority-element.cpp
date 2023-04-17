class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        
        for(auto num : nums) {
            umap[num]++;
        }
        
        for(auto element : umap) {
            if(element.second > nums.size()/2)
                return element.first;
        }
        
        return 0;
    }
};