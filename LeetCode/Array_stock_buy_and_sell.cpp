class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx_profit = INT_MIN;
        int mx_val = INT_MIN;
        
        for (int i = prices.size()-1; i >= 0; i--)
        {
            mx_val = max(mx_val, prices[i]);
            mx_profit = max(mx_profit, mx_val - prices[i]);
        }
        
        if (mx_profit < 0)
        {
            mx_profit = 0;
        }
        
        return mx_profit;
    }
};
