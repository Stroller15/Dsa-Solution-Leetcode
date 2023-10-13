class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int i = 0 ; i < nums1.size() ; i++) {
            int num1 = nums1[i];
            bool found = false;
            int j;

            for(j = 0 ; j < nums2.size() ; j++) {
                if(nums2[j] == num1) {
                    found = true;
                }

                if(found && nums2[j] > num1) {
                    result.push_back(nums2[j]);
                    break;
                }
            }

            if(j == nums2.size()) {
            result.push_back(-1);
            }
        }

        return result;
    }
};