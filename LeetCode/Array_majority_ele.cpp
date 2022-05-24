class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = -1, freq = 0;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            if (maj == -1)
            {
                maj = nums[i];
                freq++;
            }
            else  
            {
                if (maj == nums[i])
                {
                    freq++;
                }
                else  
                {
                    freq--;
                    
                    if (freq == 0)
                    {
                        maj = -1;
                    }
                }
            }
        }
        
        int count = 0;
        
        for (int x : nums)
        {
            if (x == maj)
            {
                count++;
            }
        }
        
        if (count > nums.size()/2)
        {
            return maj;
        }
        return -1;
    }
};
