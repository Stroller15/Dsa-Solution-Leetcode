class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        int n = word1.size();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i= 0 ; i < n ; ++i){
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }
        sort(freq1.rbegin(),freq1.rend());
        sort(freq2.rbegin(),freq2.rend());
        if(set(word1.begin(),word1.end())!=set(word2.begin(),word2.end()))
            return false;
        for(int i= 0;i<26;++i){
            if(freq1[i]!=freq2[i])
                return false;
        }
        return true;
    }
};