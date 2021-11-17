class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int num_subsets = 1 << (nums.size());
        int sum = 0;
        
        for (int i = 0; i < num_subsets; ++i)
        {
            int xor_v = 0;
            for (int j = 0; j < nums.size(); ++j)
            {
                if ((i & (1 << j)) != 0)
                {
                    xor_v ^= nums[j];
                }
            }
            sum += xor_v;
        }
        
        return sum;
    }
};
