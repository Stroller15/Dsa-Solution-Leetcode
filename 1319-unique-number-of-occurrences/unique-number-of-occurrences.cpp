class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> umap;
        set<int> s;
        for(int i = 0 ; i < arr.size() ; i++){
            umap[arr[i]]++;
        }

        for(auto i : umap){
            s.insert(i.second);
        }
        return s.size() == umap.size() ? true : false;
       
    }
};