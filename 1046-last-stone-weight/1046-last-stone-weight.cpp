class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(auto i : stones) {
            maxHeap.push(i);
        }

        int y , x , diff;
        while(maxHeap.size() > 1) {
            y = maxHeap.top();
            maxHeap.pop();

            x = maxHeap.top();
            maxHeap.pop();

            if(x != y) {
                diff = y - x;
                maxHeap.push(diff);
            }
            
        }

        return maxHeap.size() > 0 ? maxHeap.top() : 0;
    }
};

// TC - (nlogn)   Sc- (n)