class Solution {
public:
    //this function sets maximum value not greater than k in result
    
    int result=INT_MIN;
    void helper(vector<int>&arr,int k){
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if(sum<=k)
                    result=max(result,sum);
            }
        }
    }

    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        //we will use solution of max rectangle area and also check if area  is less than k
        result=INT_MIN;
        int row=matrix.size(),col=matrix[0].size();
        vector<int>arr(row,0); 
        for(int left=0;left<col;left++){
            //left points to start of column
            arr.assign(row,0);
            for(int right=left;right<col;right++){
                //right points to end of column
                //traverse each row
                for(int i=0;i<row;i++)
                    arr[i]+=matrix[i][right];
                    //arr[i] stores values from column left till right 
                helper(arr,k);
            }
        }
        return result;
    }
};