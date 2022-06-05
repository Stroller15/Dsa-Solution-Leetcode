class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int size = arr.size();
        int totalSum = 0 , auxSum =0 , count = 0;
        
        for(int i = 0 ; i < size ; i++){
            totalSum += arr[i];
        }
        if(totalSum % 3 != 0) return false;
        
        int value = totalSum / 3;
        for(int i = 0 ; i < size ; i++){
            auxSum = auxSum + arr[i];
            if(auxSum == value)
            {count++;
            auxSum = 0;}
        }
       if(count >=  3) return true;
        else 
            return false;
    }
};