//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int temp = N;
        
        while(temp > 0) {
            int forDevideDigit = temp % 10;
            temp = temp / 10;
            
            if(forDevideDigit != 0 && (N % forDevideDigit) == 0) count++;
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends