// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here  
        vector<long long int> ans(n) , lArr(n) , rArr(n);
        lArr[0] = 1 ; rArr[n-1] = 1;
        
        for(int i = 1 ; i < n ; i++){
            lArr[i] = nums[i-1] * lArr[i-1];
        }
        for(int i = n-2 ; i >=0 ; i--){
            rArr[i] = nums[i+1] * rArr[i+1];
        }
        for(int i = 0 ; i < n ; i++){
            ans[i] = lArr[i] * rArr[i];
        }
      return ans;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends