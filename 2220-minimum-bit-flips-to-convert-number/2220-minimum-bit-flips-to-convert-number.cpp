class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int cnt = 0;
        for(int i = 31 ; i >= 0 ; --i) {
            int bit1 = ( start >> i) & 1;
            int bit2 = ( goal >> i) & 1;

            if(bit1 != bit2) {
                cnt++;
            }
        }

        return cnt;
    }
};