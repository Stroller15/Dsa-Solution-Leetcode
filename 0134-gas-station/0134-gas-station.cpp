class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalDiff = 0, fuel = 0, index = 0, n = gas.size();

        for(int i = 0 ; i < n ; ++i) {
            int diff = gas[i] - cost[i];
            // fuel is difference of any point diff of gas and cost
            fuel += diff;
            // totaldiff coz in the last if diff of all cost and gas is -ve
            // then we can travel whole circle
            totalDiff += diff;

            if(fuel < 0) {
                fuel = 0;
                index = i+1;
            }
        }

        return totalDiff < 0 ? -1 : index;
    }
};