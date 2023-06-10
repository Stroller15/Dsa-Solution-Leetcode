// TC - O(1)
// SC - (1)

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;

        for(int i = 0 ; i < 32 ; i++) {
            if(n & 1 == 1) {
                ans++;
            }
            n = n >> 1;
        }
        return ans;
    }
};

