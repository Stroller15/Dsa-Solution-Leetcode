//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        int xorOfAll = 0;
        vector<long long int> ans;
        
        for(int i = 0 ; i < N ; i++) {
            xorOfAll ^= arr[i];
        }
        
        int rightSetBitMask = xorOfAll & -xorOfAll;
        
        int x = 0;
        int y = 0;
        
        for(int i = 0 ; i < N ; i++) {
            // Here we will make two group that each will contain one unique number
            
            if(arr[i] & rightSetBitMask) {
                x ^= arr[i];
            } else {
                y ^= arr[i];
            }
        }
        
        if(x > y) {
            ans.push_back(x);
            ans.push_back(y);
        } else {
            ans.push_back(y);
            ans.push_back(x);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends