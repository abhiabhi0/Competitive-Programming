class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; ++i)
        {
            int j = abs(nums[i])-1;
            
            if (nums[j] > 0)
            {
                nums[j] = -nums[j];
            }
            else 
            {
                return j+1;
            }
        }
        return n;
    }
};
