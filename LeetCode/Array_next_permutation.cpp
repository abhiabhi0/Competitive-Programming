class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int mn_i;
        int mn = INT_MAX;
        int partition_idx = -1;
        for (int i = n-1; i > 0; i--)
        {
            if (nums[i-1] < nums[i])
            {
                partition_idx = i-1;
                break;
            }
        }
        
        if (partition_idx != -1)
        {
            for (int i = n-1; i > partition_idx; i--)
            {
                if (nums[i] > nums[partition_idx] && nums[i] < mn)
                {
                    mn = nums[i];
                    mn_i = i;
                }
            }
            
            swap(nums[partition_idx], nums[mn_i]);
            reverse(nums.begin()+partition_idx+1, nums.end());
        }
        else
        {
            reverse(nums.begin(), nums.end());
        }
    }
};
