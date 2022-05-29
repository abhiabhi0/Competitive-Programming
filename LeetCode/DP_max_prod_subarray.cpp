class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int mn_prod = nums[0];
        int mx_prod = nums[0];
        
        for (int i = 1; i < nums.size(); ++i)
        {
            int mn_choice = nums[i]*mn_prod;
            int mx_choice = nums[i]*mx_prod;
            
            mn_prod = min(nums[i], min(mn_choice, mx_choice));
            mx_prod = max(nums[i], max(mn_choice, mx_choice));
            
            ans = max(ans, mx_prod);
        }
        return ans;
    }
};
