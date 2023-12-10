class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        int i = 0;

    while (i < size) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && 
        (i == size - 1 || flowerbed[i + 1] == 0)) {

            flowerbed[i] = 1;
            count++;
            i += 2; // Skip the next position since it's adjacent to the current planted flower
            
        } else {
            i++;
        }
    }

    return count >= n;
    }
};