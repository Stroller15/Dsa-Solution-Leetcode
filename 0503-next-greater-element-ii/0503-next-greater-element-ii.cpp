class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n = nums.size();
        nums.resize(2*n);
        
        for(int i=n; i<2*n; i++) //concatenate the same array
        {
            nums[i] = nums[i-n];
        }
        
        vector<int> res(n, -1); //to be returned, initialize it with -1
        stack<int> st;
        
        for(int i=0; i<2*n; i++)
        {
            int ele = nums[i];
            
            while(!st.empty() && ele > nums[st.top()])
            {
				//ele acts as NGE to the value at st.top()
				
                if(st.top() >= n) //index should not exceed n
                {
                    st.top() = st.top() - n;
                }
                
                res[st.top()] = ele;
                st.pop();
            }
            
            st.push(i);
        }
        
        return res;
    }
};