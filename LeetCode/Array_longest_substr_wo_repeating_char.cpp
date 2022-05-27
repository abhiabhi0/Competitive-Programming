class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<int, int> last_idx;
        
        int l = 0, r = 0;
        
        int ans = 0;
        
        while (r < n)
        {
            if (last_idx.find(s[r]) == last_idx.end())
            {
                last_idx.insert({s[r], r});
            }
            else  
            {
                ans = max(ans, r-l);
                l = max(last_idx[s[r]]+1, l);
                last_idx[s[r]] = r;
            }
            
            r++;
        }
        ans = max(ans, r-l);
        return ans;
    }
};
