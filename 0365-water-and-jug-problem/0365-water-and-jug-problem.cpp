class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity)
    {
        if (jug1Capacity+jug2Capacity<targetCapacity) return false;
        int q=__gcd(jug1Capacity,jug2Capacity);
        return (targetCapacity%q==0);
          
    }
};