// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n);
	    dp[0] = arr[0];
	    
	    for (int i = 1; i < n; ++i)
	    {
	        int mx = INT_MIN;
	        for (int j = i-1; j >= 0; --j)
	        {
	            if (arr[j] < arr[i])
	            {
	                if (mx < dp[j])
	                {
	                    mx = dp[j];    
	                }
	            }
	        }
	        
	        if (mx == INT_MIN)
	        {
	            dp[i] = arr[i];
	        }
	        else  
	        {
	            dp[i] = mx + arr[i];
	        }
	        
	    }
	    return *max_element(dp.begin(), dp.end());
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
