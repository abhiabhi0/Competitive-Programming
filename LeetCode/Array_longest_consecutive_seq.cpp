class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for (int x : nums)
        {
            st.insert(x);
        }
        
        int lo, high, ans = 0;
        
        for (int x : nums)
        {
            lo = x;
            high = x;
            
            while (st.find(lo-1) != st.end() || st.find(high+1) != st.end())
            {
                if (st.find(lo-1) != st.end())
                {
                    lo--;
                    st.erase(lo+1);
                }
                
                if (st.find(high+1) != st.end())
                {
                    high++;
                    st.erase(high-1);
                }
                
            }
            
            ans = max(ans, high-lo+1);
        }
        
        return ans;
    }
};
