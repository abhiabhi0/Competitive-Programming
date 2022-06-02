// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool is_palindrome(string& str)
    {
        int l = 0, r = str.size()-1;
        
        while (l < r)
        {
            if (str[l] != str[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    
    int func(string& str, int curr, vector<int>& dp)
    {
        if (curr >= str.length())
        {
            return -1;
        }
        
        if (dp[curr] != -1) return dp[curr];
        
        
        int ans = INT_MAX;
        string substring = "";
        for (int i = str.length(); i >= curr; i--)
        {
            substring = str.substr(curr, i-curr+1);
            if (is_palindrome(substring) == true)
            {
                ans = min(ans, 1 + func(str, i+1, dp));
            }
        }
        
        return dp[curr] = ans;
    }
    
    int palindromicPartition(string str)
    {
        // code here
        int n = str.length();
        vector<int> dp(n+1, -1);
        dp[n] = n-1;
        int ans = func(str, 0, dp);
        if (ans == INT_MAX)
        {
            ans = 0;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
