class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()) return -1;

        int n = needle.size();

        int maxIndex = haystack.size() - needle.size() + 1;

        for(int i = 0 ; i < maxIndex ; i++) {
            if(haystack.substr(i, n) == needle) {
                return i;
            }
        }
        return -1;
    }
};