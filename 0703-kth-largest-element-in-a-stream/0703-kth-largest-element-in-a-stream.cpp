class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int>> minHeap;
    int gk;

    KthLargest(int k, vector<int>& nums) {
        gk = k;
        for(auto i : nums) {
            if(minHeap.size() < k)
                minHeap.push(i);

            else if(minHeap.size() == k && i >= minHeap.top())
                minHeap.push(i);

            if(minHeap.size() > k) 
                minHeap.pop();
        }
        
    }
    
    int add(int val) {
        if(minHeap.size() < gk)
            minHeap.push(val);

        else if(minHeap.size() == gk && val >= minHeap.top())
            minHeap.push(val);

        if(minHeap.size() > gk) 
            minHeap.pop();

        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */