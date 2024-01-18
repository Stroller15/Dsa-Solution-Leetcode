/* Recursive - TC-O(2^n) SC-(n)stack */

// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n == 0) return 1;
//         if(n == 1) return 1;
//         int oneStepClimb = climbStairs(n-1);
//         int twoStepClimb = climbStairs(n-2);

//         return oneStepClimb + twoStepClimb;
//     }
// };

/* Memoization - TC-O(n) SC-O(n)stack + O(n)array */

// class Solution {
// private:
//     int helper(int n , vector<int> &dp) {
//         if(n == 0) return 1;
//         if(n == 1) return 1;

//         if(dp[n] != -1) return dp[n];

//         int oneStepClimb = helper(n-1, dp);
//         int twoStepClimb = helper(n-2, dp);

//         return dp[n] = oneStepClimb + twoStepClimb;
//     }
// public:
//     int climbStairs(int n) {
//         vector<int> dp(n+1, -1);
//        return helper(n,dp);
//     }
// };

/* Tabulation(Bottom-up) - TC-O(n) SC-O(n)array */

// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int> dp(n+1);
//         dp[0] = 1; dp[1] = 1;

//         for(int i = 2 ; i <= n ; i++) {
//             dp[i] = dp[i-1] + dp[i-2];
//         }

//         return dp[n];
//     }
// };

/* Space optimization - TC-O(n) */

class Solution {
public:
    int climbStairs(int n) {
        if(n <=1) return 1;
        int prev = 1, prevNext = 1, next = 0;

        for(int i = 2 ; i <= n ; i++) {
            next = prev + prevNext;

            prevNext = prev;
            prev = next;
        }

        return next;
    }
};


