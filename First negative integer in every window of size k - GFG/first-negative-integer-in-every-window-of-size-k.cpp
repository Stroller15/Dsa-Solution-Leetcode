// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                                                           
        long long int i = 0 , j = 0;
        vector<long long> res;
        queue<long long> temp;
        
        while(j < N){
            if(A[j] < 0)  temp.push(A[j]);
            
            if(j-i+1 < K)  j++;
            
            else if(j-i+1 == K){
                if(temp.size() == 0) res.push_back(0);
                else
                    res.push_back(temp.front());
                    if(A[i] < 0)
                    temp.pop();
                    i++;
                    j++;
                
            }
        }
        
        return res;
                                               
 
       
                       
                                                 
 }