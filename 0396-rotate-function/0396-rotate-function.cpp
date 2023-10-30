class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        long sumOfElements = 0; // Sum of all elements in the array
        long currentFn = 0;     // Current function value
        int length = A.size();  // Length of the array
        
        // Calculate the initial values for sumOfElements and currentFn
        for(int i = 0; i < length; i++) {
            sumOfElements += A[i];
            currentFn += (i * A[i]);
        }

        long leftIndex = 1; // Left index for the sliding window
        long rightIndex;    // Right index for the sliding window
        long newFn = currentFn; // New function value
        
        while(leftIndex < length) {
            rightIndex = leftIndex + length - 1; // Calculate the right index
            
            long elementRemoved = (leftIndex - 1) * A[leftIndex - 1]; // Element being removed
            long elementAdded = rightIndex * A[rightIndex % length]; // Element being added
            
            // Update the new function value
            newFn = newFn - elementRemoved + elementAdded - sumOfElements;
            
            // Update the maximum function value
            currentFn = max(currentFn, newFn);
            
            leftIndex++;
        }
        
        return static_cast<int>(currentFn); // Return the result as an integer
    }
};
