class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1 = numeric_limits<int>::min();
        int mx2 = numeric_limits<int>::min();
        
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > mx1)
            {
                mx2 = mx1;
                mx1 = nums[i];
            }
            else if (nums[i] > mx2)
            {
                mx2 = nums[i];
            }
        }
        
        return (mx1-1)*(mx2-1);
    }
};
