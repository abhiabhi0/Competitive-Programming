// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
        
        for (int i = 1; i <= n; ++i)
        {
            dp[i][1] = 1;
        }
        
        for (int j = 2; j <= k; ++j)
        {
            dp[1][j] = j;
        }
        
        for (int i = 2; i<= n; ++i)
        {
            for (int j = 2; j <= k; ++j)
            {
                int mn = INT_MAX;
                
                for (int mj = j-1, pj = 0; mj >= 0; mj--, pj++)
                {
                    int v1 = dp[i][mj];
                    int v2 = dp[i-1][pj];
                    int val = max(v1, v2);
                    mn = min(mn, val);
                }
                
                dp[i][j] = mn+1;
            }
        }
        return dp[n][k];
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
