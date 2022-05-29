class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = 1;
        
        for (int i = 1; i < n; ++i)
        {
            int val = 0;
            for (int j = 0; j < i; ++j)
            {
                if (nums[j] < nums[i])
                {
                    val = max(val, dp[j]);
                }
                
            }
            dp[i] += val+1;
        }
        return *max_element(dp.begin(), dp.end());
    }
};

//Optimised solution
// via - https://leetcode.com/problems/longest-increasing-subsequence/discuss/1326308/C%2B%2BPython-DP-Binary-Search-BIT-Solutions-Picture-explain-O(NlogN)

class Solution { // 8 ms, faster than 91.61%
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> sub;
        for (int x : nums) {
            if (sub.empty() || sub[sub.size() - 1] < x) {
                sub.push_back(x);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), x); // Find the index of the smallest number >= x
                *it = x; // Replace that number with x
            }
        }
        return sub.size();
    }
};
