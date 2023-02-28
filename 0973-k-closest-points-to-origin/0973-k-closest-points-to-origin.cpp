class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int , vector<int>>> maxHeap;

        vector<vector<int>> ans;

        for(auto i : points) {
            int x = i[0];
            int y = i[1];
            int dis = x*x + y*y;
            maxHeap.push({dis , i});

            if(maxHeap.size() > k) maxHeap.pop();
        }

        while(!maxHeap.empty()) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return ans;
    }
};

// Tc - O(nlogk) + O(k)