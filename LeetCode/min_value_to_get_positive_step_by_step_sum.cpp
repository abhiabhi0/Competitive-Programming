class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> ps(nums.size());
        
        ps[0] = nums[0];
        
        for (int i = 1; i < nums.size(); ++i)
        {
            ps[i] = ps[i-1] + nums[i];
        }
        
        int mn = *min_element(ps.begin(), ps.end());
        
        if (mn >= 0)
        {
            return 1;
        }
        else
        {
            return (1 - mn);
        }
    }
};
