// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
    pair<long long , long long> res;
    int tempMin = INT_MAX , tempMax = INT_MIN;
    
    for(int i = 0 ; i < n ; i++){
        
        if(arr[i] < tempMin){
            tempMin = arr[i];
        }
    }
    res.first = tempMin;
    
    
    for(int i = 0 ; i < n ; i++){
       
        if(arr[i] > tempMax){
            tempMax = arr[i];
        }
    }
    res.second = tempMax;
    
    return res;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}