// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        if(a.length() != b.length()){
            return false;
        }
        
     unordered_map<char,int> mp;
     for(int i = 0 ; i < b.length() ; i++){
         mp[b[i]]++;
     }
     
     int count = mp.size();
     
     for(int i = 0 ; i < a.length() ; i++){
         if(mp.find(a[i]) !=mp.end()){
             mp[a[i]]--;
             if(mp[a[i]] == 0){
                 count--;
             }
         }
     }
     
    if(count == 0) return true;
    else
    return false;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends