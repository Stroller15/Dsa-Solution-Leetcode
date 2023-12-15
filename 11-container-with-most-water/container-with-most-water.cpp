class Solution {
public:
    int maxArea(vector<int>& height) {
       int left = 0, right = height.size()-1;
       int res = INT_MIN;

       while(left < right) {
           int length = min(height[left], height[right]);
           int width = right - left;
           int currArea = length * width;

           res = max(res, currArea);
           
            // Move the pointer which has a smaller height
           if (height[left] < height[right]) {
               left++;
           } else {
               right--;
           }
       } 
       return res;
    }         
};