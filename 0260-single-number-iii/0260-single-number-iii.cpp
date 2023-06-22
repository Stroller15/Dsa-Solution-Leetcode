class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    // xor all numbers, so the duplicates are cancelled
	int x = 0;
	for (const int curr: nums) {
		x ^= curr;    
	}

	// find the bit that is set in x.
	int bit;
	for (int i=0; i<32; ++i) {
		if (x & (1<<i)) {
			bit = i;
			break;
		}
	}

	
	int first = 0;
	for (int a: nums) {
		if (a & (1<<bit)) {
			first ^= a;
		}
	}
	// now x=first^second, therefore second = a^first
	int second = first^x;
	return {first, second};
    }
};