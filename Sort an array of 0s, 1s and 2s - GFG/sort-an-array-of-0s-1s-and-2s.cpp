// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int pivot = 1 , start = 0 , mid = 0 , end = n-1;
       for(int i = 0 ; i < n ; i++){
    if(arr[mid] < pivot){
        swap(arr[mid] , arr[start]);
        start++;
        mid++;
    }
    else if(arr[mid] > pivot){
        swap(arr[mid] , arr[end]);
        end--;
    }
    else{
        mid++;
    }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends