class Solution {
public:
    vector<int> count_0_1(string& str)
    {
        int c0 = 0, c1 = 0;
        
        for (char s : str)
        {
            if (s == '0')
                c0++;
            else 
                c1++;
        }
        return {c0, c1};
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        for (string s : strs)
        {
            vector<int> counts = count_0_1(s);
            
            for (int i = m; i >= counts[0]; i--)
            {
                for (int j = n; j >= counts[1]; j--)
                {
                    dp[i][j] = max(dp[i][j], dp[i-counts[0]][j-counts[1]]+1);
                }
            }
        }
        return dp[m][n];
    }
};
