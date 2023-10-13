// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> result;

//         // Running first loop and take each element and check in second array that element is    found or not and then if it found after that element will be NGE 
//         for(int i = 0 ; i < nums1.size() ; i++) {
//             int num1 = nums1[i];
//             bool found = false;
//             int j;

//             for(j = 0 ; j < nums2.size() ; j++) {
//                 if(nums2[j] == num1) {
//                     found = true;
//                 }

//                 if(found && nums2[j] > num1) {
//                     result.push_back(nums2[j]);
//                     break;
//                 }
//             }

//             if(j == nums2.size()) {
//             result.push_back(-1);
//             }
//         }

//         return result;
//     }
// };

// Tc - O(M*N)
// Sc - O(1)




class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> umap;
        stack<int> st;

        // first we run loop on nums2 and store nge relative to each element in map

        for(int i = nums2.size()-1 ; i >= 0 ; i--) {
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            int nextElement = st.empty() ? -1 : st.top();

            umap[nums2[i]] = nextElement;

            st.push(nums2[i]);
        }
        
        // now run a loop on nums1 and get value of nums1 which is mapped with the help of nums2

        for(int i = 0 ; i < nums1.size() ; i++) {
            result.push_back(umap[nums1[i]]);
        }

        return result;
    }
};

// Tc - O(M + N)
// Sc - O(M + N)
