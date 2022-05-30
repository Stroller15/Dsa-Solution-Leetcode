class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
         unordered_map < int , int > umap;//create map in o(n)
           for(int i =0 ; i<n ; i++)
             umap[nums[i]]++;
  
           for(auto x : umap)            //in searching time o(n)
            if(x.second > n/2)
            return x.first;
        return 0;
        
    }
};

 //TC - O(n)  and  SC - O(n)