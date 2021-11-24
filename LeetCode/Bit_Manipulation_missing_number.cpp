class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        int i = 0;
        
        for (auto& num:nums)
        {
            res = res^num;
            res = res^i;
            i++;
        }
        return res;
    }
};
