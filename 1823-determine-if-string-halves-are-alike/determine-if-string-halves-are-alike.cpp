class Solution {
public:
   
    bool halvesAreAlike(string s) {
        int diff = 0;
        int mid = s.size()/2;

        

        for(int i = 0 ; i < s.size()/2 ; i++){
            diff += isVowel(s[i]) - isVowel(s[i + mid]);
        }
        return !diff;

    }
        bool isVowel(char &c){
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
        }
};