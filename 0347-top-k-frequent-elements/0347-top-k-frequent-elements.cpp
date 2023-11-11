class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k == 1 && nums.size() == 0) return nums;
        vector<int> ans;

        unordered_map<int , int> umap;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for(auto i : nums) {
            umap[i]++;
        }

        for(auto i : umap) {
            minHeap.push({i.second , i.first});
            if(minHeap.size() > k) minHeap.pop();
        }

        while(minHeap.size() > 0) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
       
    }
};