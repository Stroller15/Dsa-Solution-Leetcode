class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string forWord1 = "" , forWord2 = "";
        for(int i = 0 ; i < word1.size() ; i++){
            forWord1 += word1[i];
        }
        for(int i = 0 ; i < word2.size() ; i++){
            forWord2 += word2[i];
        }
        if(forWord1.size() != forWord2.size())  return false;
       for(int i = 0 ; i < forWord1.size() ; i++){
           if(forWord1[i] != forWord2[i]) 
              return false;
       }
       return true;
    }
};