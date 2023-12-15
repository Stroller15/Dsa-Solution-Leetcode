class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        int index = 0; // for assigning char and it's count
        int i = 0;   // for running through array

        while(i < size) {
            char currChar = chars[i];
            int count = 0;
            
            // find count of duplicate
            while(i < size && chars[i] == currChar) {
                count++;
                i++;
            }

            // here we wiil do char assigning part
            chars[index] = currChar;
            index++;

            // here we will do count assigning part and keep in mind to split if count > 9
            if(count > 1) {
                string countStr = to_string(count);  // convert count in string

                for(char &ch: countStr) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};