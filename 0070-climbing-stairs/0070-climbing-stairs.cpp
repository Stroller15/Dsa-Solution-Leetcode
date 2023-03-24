class Solution {
public:
   
    int climbStairs(int n) {
        if (n <= 1) return 1;
        int pre1 = 1;
        int pre2 = 1; int curr;
        for(int i = 2 ; i <= n ; i++){
            curr = pre1 + pre2;
            pre2 = pre1;
            pre1 = curr;
        }
        return curr;
    }
};