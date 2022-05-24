class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1 = -1, maj2 = -1, freq1 = 0, freq2 = 0;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == maj1)
            {
                freq1++;
            }
            else if (nums[i] == maj2)
            {
                freq2++;
            }
            else if (freq1 == 0)
            {
                maj1 = nums[i];
                freq1++;
            }
            else if (freq2 == 0)
            {
                maj2 = nums[i];
                freq2++;
            }
            else
            {
                freq1--;
                freq2--;
            }
        }
        vector<int> ans;
        
        int count1 = 0, count2 = 0;
        
        for (int x : nums)
        {
            if (x == maj1)
            {
                count1++;
            }
            else if (x == maj2)
            {
                count2++;
            }
        }
        
        if (count1 > nums.size()/3)
        {
            ans.push_back(maj1);
        }
        
        if (count2 > nums.size()/3)
        {
            ans.push_back(maj2);
        }
        
        return ans;
    }
};
