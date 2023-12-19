class Solution {
public:
    int maxVowels(string s, int k) {
        int maxLength = 0;
        int i = 0, j = 0, count = 0;
        int n = s.size();

        while (j < n) {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
                count++;
            }

            if (j - i + 1 < k) {
                j++;
            } else {
                maxLength = max(maxLength, count);
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    count--;
                }
                i++;
                j++;
            }
        }
        return maxLength;
    }
};
