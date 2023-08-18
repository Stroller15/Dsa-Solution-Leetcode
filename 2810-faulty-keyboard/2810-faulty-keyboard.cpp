class Solution {
public:
    string finalString(string s) {
        int k = 0;
        string str = "";
        for(int i=0; i < s.length(); i++){
            if(s[i] == 'i'){
                k = str.length() - 1;
                int j = 0;
                while(j < k){
                    swap(str[j++], str[k--]);
                }
            }
            else{
                str += s[i];
            }

        }

        return str;
    }
};