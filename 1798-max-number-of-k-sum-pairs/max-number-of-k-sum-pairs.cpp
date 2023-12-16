// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         vector<int> temp(nums.size(), 1);
//         int count = 0;

//         for(int i = 0 ; i < nums.size() ; i++) {
//             for(int j = i+1 ; j < nums.size() ; j++) {
//                 if((nums[i] + nums[j] == k) && temp[i] && temp[j]) {
//                     count++;
//                     temp[i] = 0;
//                     temp[j] = 0;
//                 }
//             }
//         }
//         return count;
//     }
// };


class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size()-1;
        int count = 0;

        while(left < right) {
            if((nums[left] + nums[right]) == k) {
                count++;
                left++;
                right--;
            }
            else if((nums[left] + nums[right]) < k) {
                left++;
            } else {
                right--;
            }
        }
        return count;
    }
};