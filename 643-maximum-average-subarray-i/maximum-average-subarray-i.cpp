// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         double maxAverage = INT_MIN;

//         for(int i = 0 ; i <= nums.size() - k ; i++) {
//             double avg = 0;
//             for(int j = i ; j < i+k ; j++) {
//                 avg += nums[j];
//             }
//             avg = avg/k;
//             maxAverage = max(maxAverage, avg);
//         }
//         return maxAverage;
//     }
// };


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        double sum = 0, maxAverage = INT_MIN;

        while(j < n) {
            sum += nums[j];

            if((j - i + 1) < k) {
                j++;
            } else {
                double avg = sum/k;
                maxAverage = max(maxAverage, avg);

                sum -= nums[i];
                i++;
                j++;
            }
        }
        return maxAverage;        
    }
};