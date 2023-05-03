// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         unordered_map<int,int> umap;
        
//         for(auto num : nums) {
//             umap[num]++;
//         }
        
//         for(auto element : umap) {
//             if(element.second > nums.size()/2)
//                 return element.first;
//         }
        
//         return 0;
//     }
// };
//  Time Complexity - O(N)
//  Space Complexity - O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int majority, count = 0;
        
        for(int i = 0 ; i < nums.size() ; i++) {

            if(count) {
                count += (majority == nums[i] ? 1 : -1);
            }

            else {
                majority = nums[i];
                count = 1;
            }
        }
        return majority;
    }
};
// Time complexity - O(N) 
// Space complexity - O(1)