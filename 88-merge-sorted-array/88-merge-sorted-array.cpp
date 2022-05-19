class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merge;
        
        
        for(int i = 0 ;i<m ; i++)
            merge.push_back(nums1[i]);
        
          for(int j = 0; j<n ; j++)
            merge.push_back(nums2[j]);
        
        sort(merge.begin(),merge.end());
        for(int a = 0 ; a<(m+n);a++)
            nums1[a]=merge[a];
    }
};