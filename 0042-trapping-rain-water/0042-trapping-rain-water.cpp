class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> maxL(n);
        vector<int> maxR(n);

        int maxSoFarLeft = INT_MIN;
        int maxSoFarRight = INT_MIN;

        // finding maxsofarleft value for each element

        for(int i = 0 ; i < n ; i++) {
            maxSoFarLeft = max(maxSoFarLeft, height[i]);
            maxL[i] = maxSoFarLeft;
        }

        // finding maxsoforright value for each element

        for(int i = n-1 ; i >= 0 ; i--) {
            maxSoFarRight = max(maxSoFarRight, height[i]);
            maxR[i] = maxSoFarRight;
        }

        // build a array -> get diff of maxL and maxR and minus height[i] for getting that how      much water each height can consume

        vector<int> water(n);
        int ans = 0;

        for(int i = 0 ; i < n ; i++) {
            water[i] = (min(maxR[i], maxL[i])) - height[i];
            ans += water[i];
        }

        return ans;
    }
};