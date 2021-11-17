class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_v = 0;
        for (auto& a : nums)
        {
            xor_v ^= a;
        }
        
        int pos = 0;
        
        int i = 0;
        
        while (xor_v)
        {
            if (xor_v % 2 != 0)
            {
                //pos++;
                break;
            }
            xor_v >>= 1;
            i++;
            pos++;
        }
        
        pos = 1 << i;
        
        int ans1 = 0, ans2 = 0;
        
        for (auto& a : nums)
        {
            if (a&pos)
            {
                ans1 ^= a;
            }
            else
            {
                ans2 ^= a;
            }
        }
        
        vector<int> res = {ans1, ans2};
        return res;
    }
};
